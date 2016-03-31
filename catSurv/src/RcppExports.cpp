// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// nextItem
List nextItem(S4 cat_df);
RcppExport SEXP CATPack_nextItem(SEXP cat_dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type cat_df(cat_dfSEXP);
    __result = Rcpp::wrap(nextItem(cat_df));
    return __result;
END_RCPP
}
// lookAheadEPVcpp
List lookAheadEPVcpp(S4 cat_df, NumericVector item);
RcppExport SEXP CATPack_lookAheadEPVcpp(SEXP cat_dfSEXP, SEXP itemSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type cat_df(cat_dfSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type item(itemSEXP);
    __result = Rcpp::wrap(lookAheadEPVcpp(cat_df, item));
    return __result;
END_RCPP
}
// probability
List probability(S4 cat_df, NumericVector t, IntegerVector q);
RcppExport SEXP CATPack_probability(SEXP cat_dfSEXP, SEXP tSEXP, SEXP qSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type cat_df(cat_dfSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type q(qSEXP);
    __result = Rcpp::wrap(probability(cat_df, t, q));
    return __result;
END_RCPP
}
// likelihood
double likelihood(S4 cat_df, NumericVector t);
RcppExport SEXP CATPack_likelihood(SEXP cat_dfSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type cat_df(cat_dfSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    __result = Rcpp::wrap(likelihood(cat_df, t));
    return __result;
END_RCPP
}
// obsInf
double obsInf(S4 cat_df, int item, double theta);
RcppExport SEXP CATPack_obsInf(SEXP cat_dfSEXP, SEXP itemSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type cat_df(cat_dfSEXP);
    Rcpp::traits::input_parameter< int >::type item(itemSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    __result = Rcpp::wrap(obsInf(cat_df, item, theta));
    return __result;
END_RCPP
}
// fisherInf
double fisherInf(S4 cat_df, int item, double theta);
RcppExport SEXP CATPack_fisherInf(SEXP cat_dfSEXP, SEXP itemSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type cat_df(cat_dfSEXP);
    Rcpp::traits::input_parameter< int >::type item(itemSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    __result = Rcpp::wrap(fisherInf(cat_df, item, theta));
    return __result;
END_RCPP
}
// dLL
double dLL(S4 cat_df, NumericVector t, LogicalVector use_p);
RcppExport SEXP CATPack_dLL(SEXP cat_dfSEXP, SEXP tSEXP, SEXP use_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type cat_df(cat_dfSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type use_p(use_pSEXP);
    __result = Rcpp::wrap(dLL(cat_df, t, use_p));
    return __result;
END_RCPP
}
// d2LL
double d2LL(S4 cat_df, NumericVector t, LogicalVector use_p);
RcppExport SEXP CATPack_d2LL(SEXP cat_dfSEXP, SEXP tSEXP, SEXP use_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type cat_df(cat_dfSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type use_p(use_pSEXP);
    __result = Rcpp::wrap(d2LL(cat_df, t, use_p));
    return __result;
END_RCPP
}
// estimateTheta
double estimateTheta(S4 cat_df);
RcppExport SEXP CATPack_estimateTheta(SEXP cat_dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type cat_df(cat_dfSEXP);
    __result = Rcpp::wrap(estimateTheta(cat_df));
    return __result;
END_RCPP
}
// estimateSE
double estimateSE(S4 cat_df);
RcppExport SEXP CATPack_estimateSE(SEXP cat_dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< S4 >::type cat_df(cat_dfSEXP);
    __result = Rcpp::wrap(estimateSE(cat_df));
    return __result;
END_RCPP
}
// prior
double prior(NumericVector x, CharacterVector c, NumericVector p);
RcppExport SEXP CATPack_prior(SEXP xSEXP, SEXP cSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type c(cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    __result = Rcpp::wrap(prior(x, c, p));
    return __result;
END_RCPP
}
// dt
double dt(NumericVector x, NumericVector mu, IntegerVector df);
RcppExport SEXP CATPack_dt(SEXP xSEXP, SEXP muSEXP, SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type df(dfSEXP);
    __result = Rcpp::wrap(dt(x, mu, df));
    return __result;
END_RCPP
}
