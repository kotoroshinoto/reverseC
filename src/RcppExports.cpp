// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mediate_helper
void mediate_helper(Environment& env);
RcppExport SEXP _reverseC_mediate_helper(SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment& >::type env(envSEXP);
    mediate_helper(env);
    return R_NilValue;
END_RCPP
}
// cpp_mult
NumericMatrix cpp_mult(NumericMatrix m1, NumericMatrix m2);
RcppExport SEXP _reverseC_cpp_mult(SEXP m1SEXP, SEXP m2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m2(m2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_mult(m1, m2));
    return rcpp_result_gen;
END_RCPP
}
// cpp_tmult
NumericMatrix cpp_tmult(NumericMatrix m1, NumericMatrix m2);
RcppExport SEXP _reverseC_cpp_tmult(SEXP m1SEXP, SEXP m2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m1(m1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m2(m2SEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_tmult(m1, m2));
    return rcpp_result_gen;
END_RCPP
}
// derp
NumericVector derp(NumericVector x);
RcppExport SEXP _reverseC_derp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(derp(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_reverseC_mediate_helper", (DL_FUNC) &_reverseC_mediate_helper, 1},
    {"_reverseC_cpp_mult", (DL_FUNC) &_reverseC_cpp_mult, 2},
    {"_reverseC_cpp_tmult", (DL_FUNC) &_reverseC_cpp_tmult, 2},
    {"_reverseC_derp", (DL_FUNC) &_reverseC_derp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_reverseC(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
