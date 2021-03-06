// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// gsi_mcmc_2
List gsi_mcmc_2(NumericMatrix SL, NumericVector Rho_init, NumericVector Omega_init, NumericVector lambda_rho, NumericVector lambda_omega, int reps, int burn_in, int sample_int_omega, int sample_int_rho, int sample_int_PofZ, int sample_int_PofR, IntegerVector RU_starts, IntegerVector RU_vec, NumericVector coll2correctRU);
RcppExport SEXP rubias_gsi_mcmc_2(SEXP SLSEXP, SEXP Rho_initSEXP, SEXP Omega_initSEXP, SEXP lambda_rhoSEXP, SEXP lambda_omegaSEXP, SEXP repsSEXP, SEXP burn_inSEXP, SEXP sample_int_omegaSEXP, SEXP sample_int_rhoSEXP, SEXP sample_int_PofZSEXP, SEXP sample_int_PofRSEXP, SEXP RU_startsSEXP, SEXP RU_vecSEXP, SEXP coll2correctRUSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type SL(SLSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Rho_init(Rho_initSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Omega_init(Omega_initSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda_rho(lambda_rhoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda_omega(lambda_omegaSEXP);
    Rcpp::traits::input_parameter< int >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< int >::type sample_int_omega(sample_int_omegaSEXP);
    Rcpp::traits::input_parameter< int >::type sample_int_rho(sample_int_rhoSEXP);
    Rcpp::traits::input_parameter< int >::type sample_int_PofZ(sample_int_PofZSEXP);
    Rcpp::traits::input_parameter< int >::type sample_int_PofR(sample_int_PofRSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type RU_starts(RU_startsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type RU_vec(RU_vecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type coll2correctRU(coll2correctRUSEXP);
    rcpp_result_gen = Rcpp::wrap(gsi_mcmc_2(SL, Rho_init, Omega_init, lambda_rho, lambda_omega, reps, burn_in, sample_int_omega, sample_int_rho, sample_int_PofZ, sample_int_PofR, RU_starts, RU_vec, coll2correctRU));
    return rcpp_result_gen;
END_RCPP
}
// geno_logL
NumericMatrix geno_logL(List par_list);
RcppExport SEXP rubias_geno_logL(SEXP par_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type par_list(par_listSEXP);
    rcpp_result_gen = Rcpp::wrap(geno_logL(par_list));
    return rcpp_result_gen;
END_RCPP
}
// samp_from_mat
IntegerVector samp_from_mat(NumericMatrix M);
RcppExport SEXP rubias_samp_from_mat(SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(samp_from_mat(M));
    return rcpp_result_gen;
END_RCPP
}
// gprob_sim_gc
NumericMatrix gprob_sim_gc(List par_list, IntegerVector sim_colls);
RcppExport SEXP rubias_gprob_sim_gc(SEXP par_listSEXP, SEXP sim_collsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type par_list(par_listSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sim_colls(sim_collsSEXP);
    rcpp_result_gen = Rcpp::wrap(gprob_sim_gc(par_list, sim_colls));
    return rcpp_result_gen;
END_RCPP
}
// gprob_sim_ind
NumericMatrix gprob_sim_ind(List par_list, IntegerVector sim_colls);
RcppExport SEXP rubias_gprob_sim_ind(SEXP par_listSEXP, SEXP sim_collsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type par_list(par_listSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sim_colls(sim_collsSEXP);
    rcpp_result_gen = Rcpp::wrap(gprob_sim_ind(par_list, sim_colls));
    return rcpp_result_gen;
END_RCPP
}
// gprob_sim_gc_missing
NumericMatrix gprob_sim_gc_missing(List par_list, IntegerVector sim_colls, IntegerVector sim_missing);
RcppExport SEXP rubias_gprob_sim_gc_missing(SEXP par_listSEXP, SEXP sim_collsSEXP, SEXP sim_missingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type par_list(par_listSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sim_colls(sim_collsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type sim_missing(sim_missingSEXP);
    rcpp_result_gen = Rcpp::wrap(gprob_sim_gc_missing(par_list, sim_colls, sim_missing));
    return rcpp_result_gen;
END_RCPP
}
// gsi_em_1
List gsi_em_1(NumericMatrix SL, NumericVector Pi_init, int max_iterations, double tolerance, bool return_progression);
RcppExport SEXP rubias_gsi_em_1(SEXP SLSEXP, SEXP Pi_initSEXP, SEXP max_iterationsSEXP, SEXP toleranceSEXP, SEXP return_progressionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type SL(SLSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Pi_init(Pi_initSEXP);
    Rcpp::traits::input_parameter< int >::type max_iterations(max_iterationsSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< bool >::type return_progression(return_progressionSEXP);
    rcpp_result_gen = Rcpp::wrap(gsi_em_1(SL, Pi_init, max_iterations, tolerance, return_progression));
    return rcpp_result_gen;
END_RCPP
}
// gsi_mcmc_1
List gsi_mcmc_1(NumericMatrix SL, NumericVector Pi_init, NumericVector lambda, int reps, int burn_in, int sample_int_Pi, int sample_int_PofZ);
RcppExport SEXP rubias_gsi_mcmc_1(SEXP SLSEXP, SEXP Pi_initSEXP, SEXP lambdaSEXP, SEXP repsSEXP, SEXP burn_inSEXP, SEXP sample_int_PiSEXP, SEXP sample_int_PofZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type SL(SLSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Pi_init(Pi_initSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type reps(repsSEXP);
    Rcpp::traits::input_parameter< int >::type burn_in(burn_inSEXP);
    Rcpp::traits::input_parameter< int >::type sample_int_Pi(sample_int_PiSEXP);
    Rcpp::traits::input_parameter< int >::type sample_int_PofZ(sample_int_PofZSEXP);
    rcpp_result_gen = Rcpp::wrap(gsi_mcmc_1(SL, Pi_init, lambda, reps, burn_in, sample_int_Pi, sample_int_PofZ));
    return rcpp_result_gen;
END_RCPP
}
// dirch_from_allocations
NumericVector dirch_from_allocations(IntegerVector C, NumericVector lambda);
RcppExport SEXP rubias_dirch_from_allocations(SEXP CSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type C(CSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(dirch_from_allocations(C, lambda));
    return rcpp_result_gen;
END_RCPP
}
// dirch_from_counts
NumericVector dirch_from_counts(IntegerVector C, NumericVector lambda);
RcppExport SEXP rubias_dirch_from_counts(SEXP CSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type C(CSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(dirch_from_counts(C, lambda));
    return rcpp_result_gen;
END_RCPP
}
