#include <Eigen/Dense>
#include <ios>
#include <istream>
#include <iterator>
#include <locale>
#include <memory>
#include <mrpt/math/CMatrixDynamic.h>
#include <mrpt/math/CMatrixFixed.h>
#include <mrpt/math/CVectorDynamic.h>
#include <mrpt/math/MatrixVectorBase.h>
#include <mrpt/math/math_frwds.h>
#include <mrpt/math/matrix_size_t.h>
#include <optional>
#include <ostream>
#include <sstream> // __str__
#include <streambuf>
#include <string>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>
#include <stl_binders.hpp>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_mrpt_math_MatrixVectorBase_5(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // mrpt::math::MatrixVectorBase file:mrpt/math/MatrixVectorBase.h line:57
		pybind11::class_<mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>, std::shared_ptr<mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>>> cl(M("mrpt::math"), "MatrixVectorBase_unsigned_char_mrpt_math_CMatrixDynamic_unsigned_char_t", "");
		cl.def( pybind11::init( [](){ return new mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>(); } ) );
		cl.def( pybind11::init( [](mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>> const &o){ return new mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>(o); } ) );
		cl.def("fill", (void (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(const unsigned char &)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::fill, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::fill(const unsigned char &) --> void", pybind11::arg("val"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(const unsigned char)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::setConstant, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::setConstant(const unsigned char) --> void", pybind11::arg("value"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(size_t, size_t, const unsigned char)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::setConstant, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::setConstant(size_t, size_t, const unsigned char) --> void", pybind11::arg("nrows"), pybind11::arg("ncols"), pybind11::arg("value"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(size_t, const unsigned char)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::setConstant, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::setConstant(size_t, const unsigned char) --> void", pybind11::arg("nrows"), pybind11::arg("value"));
		cl.def_static("Constant", (class mrpt::math::CMatrixDynamic<unsigned char> (*)(const unsigned char)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::Constant, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::Constant(const unsigned char) --> class mrpt::math::CMatrixDynamic<unsigned char>", pybind11::arg("value"));
		cl.def_static("Constant", (class mrpt::math::CMatrixDynamic<unsigned char> (*)(size_t, size_t, const unsigned char)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::Constant, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::Constant(size_t, size_t, const unsigned char) --> class mrpt::math::CMatrixDynamic<unsigned char>", pybind11::arg("nrows"), pybind11::arg("ncols"), pybind11::arg("value"));
		cl.def("assign", (void (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(const unsigned long, const unsigned char)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::assign, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::assign(const unsigned long, const unsigned char) --> void", pybind11::arg("N"), pybind11::arg("value"));
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)()) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::setZero, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::setZero() --> void");
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(size_t, size_t)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::setZero, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::setZero(size_t, size_t) --> void", pybind11::arg("nrows"), pybind11::arg("ncols"));
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(size_t)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::setZero, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::setZero(size_t) --> void", pybind11::arg("nrows"));
		cl.def_static("Zero", (class mrpt::math::CMatrixDynamic<unsigned char> (*)()) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::Zero, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::Zero() --> class mrpt::math::CMatrixDynamic<unsigned char>");
		cl.def_static("Zero", (class mrpt::math::CMatrixDynamic<unsigned char> (*)(size_t, size_t)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::Zero, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::Zero(size_t, size_t) --> class mrpt::math::CMatrixDynamic<unsigned char>", pybind11::arg("nrows"), pybind11::arg("ncols"));
		cl.def("coeffRef", (unsigned char & (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(int, int)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::coeffRef, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::coeffRef(int, int) --> unsigned char &", pybind11::return_value_policy::automatic, pybind11::arg("r"), pybind11::arg("c"));
		cl.def("coeff", (const unsigned char & (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(int, int) const) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::coeff, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::coeff(int, int) const --> const unsigned char &", pybind11::return_value_policy::automatic, pybind11::arg("r"), pybind11::arg("c"));
		cl.def("isSquare", (bool (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)() const) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::isSquare, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::isSquare() const --> bool");
		cl.def("empty", (bool (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)() const) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::empty, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::empty() const --> bool");
		cl.def("norm_inf", (unsigned char (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)() const) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::norm_inf, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::norm_inf() const --> unsigned char");
		cl.def("norm", (unsigned char (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)() const) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::norm, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::norm() const --> unsigned char");
		cl.def("__iadd__", (void (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(unsigned char)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::operator+=, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::operator+=(unsigned char) --> void", pybind11::arg("s"));
		cl.def("__isub__", (void (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(unsigned char)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::operator-=, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::operator-=(unsigned char) --> void", pybind11::arg("s"));
		cl.def("__imul__", (void (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(unsigned char)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::operator*=, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::operator*=(unsigned char) --> void", pybind11::arg("s"));
		cl.def("__add__", (class mrpt::math::CMatrixDynamic<unsigned char> (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(const class mrpt::math::CMatrixDynamic<unsigned char> &) const) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::operator+, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::operator+(const class mrpt::math::CMatrixDynamic<unsigned char> &) const --> class mrpt::math::CMatrixDynamic<unsigned char>", pybind11::arg("m2"));
		cl.def("__iadd__", (void (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(const class mrpt::math::CMatrixDynamic<unsigned char> &)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::operator+=, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::operator+=(const class mrpt::math::CMatrixDynamic<unsigned char> &) --> void", pybind11::arg("m2"));
		cl.def("__isub__", (void (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(const class mrpt::math::CMatrixDynamic<unsigned char> &)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::operator-=, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::operator-=(const class mrpt::math::CMatrixDynamic<unsigned char> &) --> void", pybind11::arg("m2"));
		cl.def("sum", (unsigned char (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)() const) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::sum, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::sum() const --> unsigned char");
		cl.def("sum_abs", (unsigned char (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)() const) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::sum_abs, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::sum_abs() const --> unsigned char");
		cl.def("asString", (std::string (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)() const) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::asString, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::asString() const --> std::string");
		cl.def("inMatlabFormat", [](mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>> const &o) -> std::string { return o.inMatlabFormat(); }, "");
		cl.def("inMatlabFormat", (std::string (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(const unsigned long) const) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::inMatlabFormat, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::inMatlabFormat(const unsigned long) const --> std::string", pybind11::arg("decimal_digits"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>> const &o, const std::string & a0) -> void { return o.saveToTextFile(a0); }, "", pybind11::arg("file"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>> const &o, const std::string & a0, enum mrpt::math::TMatrixTextFileFormat const & a1) -> void { return o.saveToTextFile(a0, a1); }, "", pybind11::arg("file"), pybind11::arg("fileFormat"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>> const &o, const std::string & a0, enum mrpt::math::TMatrixTextFileFormat const & a1, bool const & a2) -> void { return o.saveToTextFile(a0, a1, a2); }, "", pybind11::arg("file"), pybind11::arg("fileFormat"), pybind11::arg("appendMRPTHeader"));
		cl.def("saveToTextFile", (void (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(const std::string &, enum mrpt::math::TMatrixTextFileFormat, bool, const std::string &) const) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::saveToTextFile, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::saveToTextFile(const std::string &, enum mrpt::math::TMatrixTextFileFormat, bool, const std::string &) const --> void", pybind11::arg("file"), pybind11::arg("fileFormat"), pybind11::arg("appendMRPTHeader"), pybind11::arg("userHeader"));
		cl.def("loadFromTextFile", (void (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(const std::string &)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::loadFromTextFile, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::loadFromTextFile(const std::string &) --> void", pybind11::arg("file"));
		cl.def("assign", (class mrpt::math::MatrixVectorBase<unsigned char, class mrpt::math::CMatrixDynamic<unsigned char> > & (mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>>::*)(const class mrpt::math::MatrixVectorBase<unsigned char, class mrpt::math::CMatrixDynamic<unsigned char> > &)) &mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::operator=, "C++: mrpt::math::MatrixVectorBase<unsigned char, mrpt::math::CMatrixDynamic<unsigned char>>::operator=(const class mrpt::math::MatrixVectorBase<unsigned char, class mrpt::math::CMatrixDynamic<unsigned char> > &) --> class mrpt::math::MatrixVectorBase<unsigned char, class mrpt::math::CMatrixDynamic<unsigned char> > &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		cl.def("__str__", [](mrpt::math::MatrixVectorBase<unsigned char,mrpt::math::CMatrixDynamic<unsigned char>> const &o) -> std::string { std::ostringstream s; using namespace mrpt::math; s << o; return s.str(); } );
	}
	{ // mrpt::math::MatrixVectorBase file:mrpt/math/MatrixVectorBase.h line:57
		pybind11::class_<mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>, std::shared_ptr<mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>>> cl(M("mrpt::math"), "MatrixVectorBase_double_mrpt_math_CMatrixFixed_double_2_2_t", "");
		cl.def( pybind11::init( [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>> const &o){ return new mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>(o); } ) );
		cl.def( pybind11::init( [](){ return new mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>(); } ) );
		cl.def("fill", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(const double &)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::fill, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::fill(const double &) --> void", pybind11::arg("val"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::setConstant, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::setConstant(const double) --> void", pybind11::arg("value"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(size_t, size_t, const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::setConstant, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::setConstant(size_t, size_t, const double) --> void", pybind11::arg("nrows"), pybind11::arg("ncols"), pybind11::arg("value"));
		cl.def("setConstant", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(size_t, const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::setConstant, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::setConstant(size_t, const double) --> void", pybind11::arg("nrows"), pybind11::arg("value"));
		cl.def_static("Constant", (class mrpt::math::CMatrixFixed<double, 2, 2> (*)(const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::Constant, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::Constant(const double) --> class mrpt::math::CMatrixFixed<double, 2, 2>", pybind11::arg("value"));
		cl.def_static("Constant", (class mrpt::math::CMatrixFixed<double, 2, 2> (*)(size_t, size_t, const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::Constant, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::Constant(size_t, size_t, const double) --> class mrpt::math::CMatrixFixed<double, 2, 2>", pybind11::arg("nrows"), pybind11::arg("ncols"), pybind11::arg("value"));
		cl.def("assign", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(const unsigned long, const double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::assign, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::assign(const unsigned long, const double) --> void", pybind11::arg("N"), pybind11::arg("value"));
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)()) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::setZero, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::setZero() --> void");
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(size_t, size_t)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::setZero, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::setZero(size_t, size_t) --> void", pybind11::arg("nrows"), pybind11::arg("ncols"));
		cl.def("setZero", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(size_t)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::setZero, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::setZero(size_t) --> void", pybind11::arg("nrows"));
		cl.def_static("Zero", (class mrpt::math::CMatrixFixed<double, 2, 2> (*)()) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::Zero, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::Zero() --> class mrpt::math::CMatrixFixed<double, 2, 2>");
		cl.def_static("Zero", (class mrpt::math::CMatrixFixed<double, 2, 2> (*)(size_t, size_t)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::Zero, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::Zero(size_t, size_t) --> class mrpt::math::CMatrixFixed<double, 2, 2>", pybind11::arg("nrows"), pybind11::arg("ncols"));
		cl.def("coeffRef", (double & (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(int, int)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::coeffRef, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::coeffRef(int, int) --> double &", pybind11::return_value_policy::automatic, pybind11::arg("r"), pybind11::arg("c"));
		cl.def("coeff", (const double & (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(int, int) const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::coeff, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::coeff(int, int) const --> const double &", pybind11::return_value_policy::automatic, pybind11::arg("r"), pybind11::arg("c"));
		cl.def("isSquare", (bool (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::isSquare, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::isSquare() const --> bool");
		cl.def("empty", (bool (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::empty, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::empty() const --> bool");
		cl.def("norm_inf", (double (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::norm_inf, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::norm_inf() const --> double");
		cl.def("norm", (double (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::norm, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::norm() const --> double");
		cl.def("__iadd__", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::operator+=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::operator+=(double) --> void", pybind11::arg("s"));
		cl.def("__isub__", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::operator-=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::operator-=(double) --> void", pybind11::arg("s"));
		cl.def("__imul__", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(double)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::operator*=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::operator*=(double) --> void", pybind11::arg("s"));
		cl.def("__add__", (class mrpt::math::CMatrixFixed<double, 2, 2> (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(const class mrpt::math::CMatrixFixed<double, 2, 2> &) const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::operator+, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::operator+(const class mrpt::math::CMatrixFixed<double, 2, 2> &) const --> class mrpt::math::CMatrixFixed<double, 2, 2>", pybind11::arg("m2"));
		cl.def("__iadd__", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(const class mrpt::math::CMatrixFixed<double, 2, 2> &)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::operator+=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::operator+=(const class mrpt::math::CMatrixFixed<double, 2, 2> &) --> void", pybind11::arg("m2"));
		cl.def("__isub__", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(const class mrpt::math::CMatrixFixed<double, 2, 2> &)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::operator-=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::operator-=(const class mrpt::math::CMatrixFixed<double, 2, 2> &) --> void", pybind11::arg("m2"));
		cl.def("sum", (double (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::sum, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::sum() const --> double");
		cl.def("sum_abs", (double (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::sum_abs, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::sum_abs() const --> double");
		cl.def("asString", (std::string (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)() const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::asString, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::asString() const --> std::string");
		cl.def("inMatlabFormat", [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>> const &o) -> std::string { return o.inMatlabFormat(); }, "");
		cl.def("inMatlabFormat", (std::string (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(const unsigned long) const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::inMatlabFormat, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::inMatlabFormat(const unsigned long) const --> std::string", pybind11::arg("decimal_digits"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>> const &o, const std::string & a0) -> void { return o.saveToTextFile(a0); }, "", pybind11::arg("file"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>> const &o, const std::string & a0, enum mrpt::math::TMatrixTextFileFormat const & a1) -> void { return o.saveToTextFile(a0, a1); }, "", pybind11::arg("file"), pybind11::arg("fileFormat"));
		cl.def("saveToTextFile", [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>> const &o, const std::string & a0, enum mrpt::math::TMatrixTextFileFormat const & a1, bool const & a2) -> void { return o.saveToTextFile(a0, a1, a2); }, "", pybind11::arg("file"), pybind11::arg("fileFormat"), pybind11::arg("appendMRPTHeader"));
		cl.def("saveToTextFile", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(const std::string &, enum mrpt::math::TMatrixTextFileFormat, bool, const std::string &) const) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::saveToTextFile, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::saveToTextFile(const std::string &, enum mrpt::math::TMatrixTextFileFormat, bool, const std::string &) const --> void", pybind11::arg("file"), pybind11::arg("fileFormat"), pybind11::arg("appendMRPTHeader"), pybind11::arg("userHeader"));
		cl.def("loadFromTextFile", (void (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(const std::string &)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::loadFromTextFile, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::loadFromTextFile(const std::string &) --> void", pybind11::arg("file"));
		cl.def("assign", (class mrpt::math::MatrixVectorBase<double, class mrpt::math::CMatrixFixed<double, 2, 2> > & (mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>>::*)(const class mrpt::math::MatrixVectorBase<double, class mrpt::math::CMatrixFixed<double, 2, 2> > &)) &mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::operator=, "C++: mrpt::math::MatrixVectorBase<double, mrpt::math::CMatrixFixed<double, 2, 2>>::operator=(const class mrpt::math::MatrixVectorBase<double, class mrpt::math::CMatrixFixed<double, 2, 2> > &) --> class mrpt::math::MatrixVectorBase<double, class mrpt::math::CMatrixFixed<double, 2, 2> > &", pybind11::return_value_policy::automatic, pybind11::arg(""));

		cl.def("__str__", [](mrpt::math::MatrixVectorBase<double,mrpt::math::CMatrixFixed<double, 2, 2>> const &o) -> std::string { std::ostringstream s; using namespace mrpt::math; s << o; return s.str(); } );
	}
}
