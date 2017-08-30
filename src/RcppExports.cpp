// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/BNPMIXcluster.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// dmvnrm_arma
arma::vec dmvnrm_arma(arma::mat x, arma::rowvec mean, arma::mat sigma, bool logd);
RcppExport SEXP _BNPMIXcluster_dmvnrm_arma(SEXP xSEXP, SEXP meanSEXP, SEXP sigmaSEXP, SEXP logdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type logd(logdSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnrm_arma(x, mean, sigma, logd));
    return rcpp_result_gen;
END_RCPP
}
// get_latents_cpp
arma::mat get_latents_cpp(arma::mat Y, arma::ucolvec var_type, arma::mat mu_Z, arma::mat sigma_Z, arma::mat Z_ini, bool verbose);
RcppExport SEXP _BNPMIXcluster_get_latents_cpp(SEXP YSEXP, SEXP var_typeSEXP, SEXP mu_ZSEXP, SEXP sigma_ZSEXP, SEXP Z_iniSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::ucolvec >::type var_type(var_typeSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu_Z(mu_ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma_Z(sigma_ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z_ini(Z_iniSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(get_latents_cpp(Y, var_type, mu_Z, sigma_Z, Z_ini, verbose));
    return rcpp_result_gen;
END_RCPP
}
// log_f_post_a_cpp
double log_f_post_a_cpp(double a, double b, double alpha, double d_0_a, double d_1_a, arma::colvec mu_star_n_r);
RcppExport SEXP _BNPMIXcluster_log_f_post_a_cpp(SEXP aSEXP, SEXP bSEXP, SEXP alphaSEXP, SEXP d_0_aSEXP, SEXP d_1_aSEXP, SEXP mu_star_n_rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type d_0_a(d_0_aSEXP);
    Rcpp::traits::input_parameter< double >::type d_1_a(d_1_aSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type mu_star_n_r(mu_star_n_rSEXP);
    rcpp_result_gen = Rcpp::wrap(log_f_post_a_cpp(a, b, alpha, d_0_a, d_1_a, mu_star_n_r));
    return rcpp_result_gen;
END_RCPP
}
// log_f_post_b_cpp
double log_f_post_b_cpp(double b, double a, double d_0_b, double d_1_b, arma::colvec mu_star_n_r);
RcppExport SEXP _BNPMIXcluster_log_f_post_b_cpp(SEXP bSEXP, SEXP aSEXP, SEXP d_0_bSEXP, SEXP d_1_bSEXP, SEXP mu_star_n_rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type d_0_b(d_0_bSEXP);
    Rcpp::traits::input_parameter< double >::type d_1_b(d_1_bSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type mu_star_n_r(mu_star_n_rSEXP);
    rcpp_result_gen = Rcpp::wrap(log_f_post_b_cpp(b, a, d_0_b, d_1_b, mu_star_n_r));
    return rcpp_result_gen;
END_RCPP
}
// log_f_post_Lambda_jj_cpp
double log_f_post_Lambda_jj_cpp(double sigma_jj, double d_0_z, double d_1_z, arma::mat Z, arma::mat mu_Z, arma::mat sigma_Z, arma::colvec sampling_prob);
RcppExport SEXP _BNPMIXcluster_log_f_post_Lambda_jj_cpp(SEXP sigma_jjSEXP, SEXP d_0_zSEXP, SEXP d_1_zSEXP, SEXP ZSEXP, SEXP mu_ZSEXP, SEXP sigma_ZSEXP, SEXP sampling_probSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type sigma_jj(sigma_jjSEXP);
    Rcpp::traits::input_parameter< double >::type d_0_z(d_0_zSEXP);
    Rcpp::traits::input_parameter< double >::type d_1_z(d_1_zSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu_Z(mu_ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type sigma_Z(sigma_ZSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type sampling_prob(sampling_probSEXP);
    rcpp_result_gen = Rcpp::wrap(log_f_post_Lambda_jj_cpp(sigma_jj, d_0_z, d_1_z, Z, mu_Z, sigma_Z, sampling_prob));
    return rcpp_result_gen;
END_RCPP
}
// log_f_post_Omega_cpp
double log_f_post_Omega_cpp(arma::mat Omega, arma::mat Z, arma::mat mu_Z, arma::colvec sampling_prob, arma::mat Lambda);
RcppExport SEXP _BNPMIXcluster_log_f_post_Omega_cpp(SEXP OmegaSEXP, SEXP ZSEXP, SEXP mu_ZSEXP, SEXP sampling_probSEXP, SEXP LambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mu_Z(mu_ZSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type sampling_prob(sampling_probSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Lambda(LambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(log_f_post_Omega_cpp(Omega, Z, mu_Z, sampling_prob, Lambda));
    return rcpp_result_gen;
END_RCPP
}
// rtn1
double rtn1(const double mean, const double sd, const double low, const double high);
static SEXP _BNPMIXcluster_rtn1_try(SEXP meanSEXP, SEXP sdSEXP, SEXP lowSEXP, SEXP highSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const double >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< const double >::type low(lowSEXP);
    Rcpp::traits::input_parameter< const double >::type high(highSEXP);
    rcpp_result_gen = Rcpp::wrap(rtn1(mean, sd, low, high));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _BNPMIXcluster_rtn1(SEXP meanSEXP, SEXP sdSEXP, SEXP lowSEXP, SEXP highSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_BNPMIXcluster_rtn1_try(meanSEXP, sdSEXP, lowSEXP, highSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _BNPMIXcluster_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("double(*rtn1)(const double,const double,const double,const double)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _BNPMIXcluster_RcppExport_registerCCallable() { 
    R_RegisterCCallable("BNPMIXcluster", "_BNPMIXcluster_rtn1", (DL_FUNC)_BNPMIXcluster_rtn1_try);
    R_RegisterCCallable("BNPMIXcluster", "_BNPMIXcluster_RcppExport_validate", (DL_FUNC)_BNPMIXcluster_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_BNPMIXcluster_dmvnrm_arma", (DL_FUNC) &_BNPMIXcluster_dmvnrm_arma, 4},
    {"_BNPMIXcluster_get_latents_cpp", (DL_FUNC) &_BNPMIXcluster_get_latents_cpp, 6},
    {"_BNPMIXcluster_log_f_post_a_cpp", (DL_FUNC) &_BNPMIXcluster_log_f_post_a_cpp, 6},
    {"_BNPMIXcluster_log_f_post_b_cpp", (DL_FUNC) &_BNPMIXcluster_log_f_post_b_cpp, 5},
    {"_BNPMIXcluster_log_f_post_Lambda_jj_cpp", (DL_FUNC) &_BNPMIXcluster_log_f_post_Lambda_jj_cpp, 7},
    {"_BNPMIXcluster_log_f_post_Omega_cpp", (DL_FUNC) &_BNPMIXcluster_log_f_post_Omega_cpp, 5},
    {"_BNPMIXcluster_rtn1", (DL_FUNC) &_BNPMIXcluster_rtn1, 4},
    {"_BNPMIXcluster_RcppExport_registerCCallable", (DL_FUNC) &_BNPMIXcluster_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_BNPMIXcluster(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}