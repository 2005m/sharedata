// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// clone_shared_raw
RawVector clone_shared_raw(const char* seg_name, const char* obj_name);
RcppExport SEXP sharedata_clone_shared_raw(SEXP seg_nameSEXP, SEXP obj_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const char* >::type seg_name(seg_nameSEXP);
    Rcpp::traits::input_parameter< const char* >::type obj_name(obj_nameSEXP);
    __result = Rcpp::wrap(clone_shared_raw(seg_name, obj_name));
    return __result;
END_RCPP
}
// exists_shared_object
bool exists_shared_object(const char* seg_name);
RcppExport SEXP sharedata_exists_shared_object(SEXP seg_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const char* >::type seg_name(seg_nameSEXP);
    __result = Rcpp::wrap(exists_shared_object(seg_name));
    return __result;
END_RCPP
}
// remove_shared_object
bool remove_shared_object(const char* seg_name);
RcppExport SEXP sharedata_remove_shared_object(SEXP seg_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const char* >::type seg_name(seg_nameSEXP);
    __result = Rcpp::wrap(remove_shared_object(seg_name));
    return __result;
END_RCPP
}
// share_raw
int share_raw(const std::vector<Rbyte>& vec, const char* seg_name, const char* obj_name, const bool& overwrite);
RcppExport SEXP sharedata_share_raw(SEXP vecSEXP, SEXP seg_nameSEXP, SEXP obj_nameSEXP, SEXP overwriteSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const std::vector<Rbyte>& >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< const char* >::type seg_name(seg_nameSEXP);
    Rcpp::traits::input_parameter< const char* >::type obj_name(obj_nameSEXP);
    Rcpp::traits::input_parameter< const bool& >::type overwrite(overwriteSEXP);
    __result = Rcpp::wrap(share_raw(vec, seg_name, obj_name, overwrite));
    return __result;
END_RCPP
}
