// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// embedc
NumericMatrix embedc(NumericVector x, unsigned int lags);
RcppExport SEXP _ahead_embedc(SEXP xSEXP, SEXP lagsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type lags(lagsSEXP);
    rcpp_result_gen = Rcpp::wrap(embedc(x, lags));
    return rcpp_result_gen;
END_RCPP
}
// forecast_innovs_loop_cpp
NumericVector forecast_innovs_loop_cpp(NumericVector eps, NumericVector rts, double eps_prev, double omega, double alpha, double beta, unsigned int df, unsigned int h);
RcppExport SEXP _ahead_forecast_innovs_loop_cpp(SEXP epsSEXP, SEXP rtsSEXP, SEXP eps_prevSEXP, SEXP omegaSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP dfSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rts(rtsSEXP);
    Rcpp::traits::input_parameter< double >::type eps_prev(eps_prevSEXP);
    Rcpp::traits::input_parameter< double >::type omega(omegaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type df(dfSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(forecast_innovs_loop_cpp(eps, rts, eps_prev, omega, alpha, beta, df, h));
    return rcpp_result_gen;
END_RCPP
}
// forecast_innovs_loop_cpp2
NumericVector forecast_innovs_loop_cpp2(NumericVector eps, NumericVector rn, double eps_prev, double omega, double alpha, double beta, unsigned int df, unsigned int h);
RcppExport SEXP _ahead_forecast_innovs_loop_cpp2(SEXP epsSEXP, SEXP rnSEXP, SEXP eps_prevSEXP, SEXP omegaSEXP, SEXP alphaSEXP, SEXP betaSEXP, SEXP dfSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rn(rnSEXP);
    Rcpp::traits::input_parameter< double >::type eps_prev(eps_prevSEXP);
    Rcpp::traits::input_parameter< double >::type omega(omegaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type df(dfSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(forecast_innovs_loop_cpp2(eps, rn, eps_prev, omega, alpha, beta, df, h));
    return rcpp_result_gen;
END_RCPP
}
// create_lags_cpp
NumericMatrix create_lags_cpp(NumericVector x, int k);
RcppExport SEXP _ahead_create_lags_cpp(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(create_lags_cpp(x, k));
    return rcpp_result_gen;
END_RCPP
}
// create_train_inputs_cpp
List create_train_inputs_cpp(NumericMatrix x, int k);
RcppExport SEXP _ahead_create_train_inputs_cpp(SEXP xSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(create_train_inputs_cpp(x, k));
    return rcpp_result_gen;
END_RCPP
}
// reformat_cpp
NumericMatrix reformat_cpp(NumericMatrix x, unsigned long int n_k);
RcppExport SEXP _ahead_reformat_cpp(SEXP xSEXP, SEXP n_kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< unsigned long int >::type n_k(n_kSEXP);
    rcpp_result_gen = Rcpp::wrap(reformat_cpp(x, n_k));
    return rcpp_result_gen;
END_RCPP
}
// rev_matrix_cpp
NumericMatrix rev_matrix_cpp(NumericMatrix x);
RcppExport SEXP _ahead_rev_matrix_cpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rev_matrix_cpp(x));
    return rcpp_result_gen;
END_RCPP
}
// rbind_vecmat_cpp
NumericMatrix rbind_vecmat_cpp(NumericVector y, NumericMatrix x);
RcppExport SEXP _ahead_rbind_vecmat_cpp(SEXP ySEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rbind_vecmat_cpp(y, x));
    return rcpp_result_gen;
END_RCPP
}
// cbind_cpp
NumericMatrix cbind_cpp(NumericMatrix x, NumericMatrix y);
RcppExport SEXP _ahead_cbind_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cbind_cpp(x, y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ahead_embedc", (DL_FUNC) &_ahead_embedc, 2},
    {"_ahead_forecast_innovs_loop_cpp", (DL_FUNC) &_ahead_forecast_innovs_loop_cpp, 8},
    {"_ahead_forecast_innovs_loop_cpp2", (DL_FUNC) &_ahead_forecast_innovs_loop_cpp2, 8},
    {"_ahead_create_lags_cpp", (DL_FUNC) &_ahead_create_lags_cpp, 2},
    {"_ahead_create_train_inputs_cpp", (DL_FUNC) &_ahead_create_train_inputs_cpp, 2},
    {"_ahead_reformat_cpp", (DL_FUNC) &_ahead_reformat_cpp, 2},
    {"_ahead_rev_matrix_cpp", (DL_FUNC) &_ahead_rev_matrix_cpp, 1},
    {"_ahead_rbind_vecmat_cpp", (DL_FUNC) &_ahead_rbind_vecmat_cpp, 2},
    {"_ahead_cbind_cpp", (DL_FUNC) &_ahead_cbind_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_ahead(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
