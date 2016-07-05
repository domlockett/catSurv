#include "MPWISelector.h"


SelectionType MPWISelector::getSelectionType() {
	return SelectionType::MPWI;
}

Selection MPWISelector::selectItem() {
	Selection selection;
	selection.name = "MPWI";
	selection.questions = questionSet.nonapplicable_rows;
	selection.values.reserve(questionSet.nonapplicable_rows.size());
	
	double max_pwi = 0.0;
	int max_item = -1;
	
	for (size_t i = 0; i < questionSet.nonapplicable_rows.size(); ++i) {
	  int question = questionSet.nonapplicable_rows.at(i);
	  selection.values.push_back(estimator.pwi(question, prior));

		//double current_pwi = 0;

		if (selection.values[i] > max_pwi) {
			max_item = question;
			max_pwi = selection.values[i];
		}
	}
	
	selection.item = max_item;
	selection.item = selection.item;
	return selection;
}

MPWISelector::MPWISelector(QuestionSet &questions, Estimator &estimation, Prior &priorModel) : Selector(questions, estimation,
                                                                                                        priorModel) { }