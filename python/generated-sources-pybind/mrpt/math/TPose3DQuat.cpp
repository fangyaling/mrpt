#include <Eigen/Dense>
#include <iterator>
#include <memory>
#include <mrpt/math/TPose3DQuat.h>
#include <sstream> // __str__
#include <string>
#include <vector>

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

void bind_mrpt_math_TPose3DQuat(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // mrpt::math::TPose3DQuat file:mrpt/math/TPose3DQuat.h line:20
		pybind11::class_<mrpt::math::TPose3DQuat, std::shared_ptr<mrpt::math::TPose3DQuat>, mrpt::math::TPoseOrPoint> cl(M("mrpt::math"), "TPose3DQuat", "Lightweight 3D pose (three spatial coordinates, plus a quaternion ). Allows\n coordinate access using [] operator.\n \n\n mrpt::poses::CPose3DQuat\n \n\n\n ");
		cl.def( pybind11::init<double, double, double, double, double, double, double>(), pybind11::arg("_x"), pybind11::arg("_y"), pybind11::arg("_z"), pybind11::arg("_qr"), pybind11::arg("_qx"), pybind11::arg("_qy"), pybind11::arg("_qz") );

		cl.def( pybind11::init( [](){ return new mrpt::math::TPose3DQuat(); } ) );
		cl.def( pybind11::init( [](mrpt::math::TPose3DQuat const &o){ return new mrpt::math::TPose3DQuat(o); } ) );
		cl.def_readwrite("x", &mrpt::math::TPose3DQuat::x);
		cl.def_readwrite("y", &mrpt::math::TPose3DQuat::y);
		cl.def_readwrite("z", &mrpt::math::TPose3DQuat::z);
		cl.def_readwrite("qr", &mrpt::math::TPose3DQuat::qr);
		cl.def_readwrite("qx", &mrpt::math::TPose3DQuat::qx);
		cl.def_readwrite("qy", &mrpt::math::TPose3DQuat::qy);
		cl.def_readwrite("qz", &mrpt::math::TPose3DQuat::qz);
		cl.def("__getitem__", (double & (mrpt::math::TPose3DQuat::*)(size_t)) &mrpt::math::TPose3DQuat::operator[], "Coordinate access using operator[]. Order: x,y,z,qr,qx,qy,qz \n\nC++: mrpt::math::TPose3DQuat::operator[](size_t) --> double &", pybind11::return_value_policy::automatic, pybind11::arg("i"));
		cl.def("norm", (double (mrpt::math::TPose3DQuat::*)() const) &mrpt::math::TPose3DQuat::norm, "Pose's spatial coordinates (x,y,z) norm. \n\nC++: mrpt::math::TPose3DQuat::norm() const --> double");
		cl.def("asString", (void (mrpt::math::TPose3DQuat::*)(std::string &) const) &mrpt::math::TPose3DQuat::asString, "Returns a human-readable textual representation of the object as \"[x y z\n qr qx qy qz]\"\n \n\n fromString\n\nC++: mrpt::math::TPose3DQuat::asString(std::string &) const --> void", pybind11::arg("s"));
		cl.def("asString", (std::string (mrpt::math::TPose3DQuat::*)() const) &mrpt::math::TPose3DQuat::asString, "C++: mrpt::math::TPose3DQuat::asString() const --> std::string");
		cl.def("fromString", (void (mrpt::math::TPose3DQuat::*)(const std::string &)) &mrpt::math::TPose3DQuat::fromString, "Set the current object value from a string generated by 'asString' (eg:\n \"[0.02 1.04 -0.8 1.0 0.0 0.0 0.0]\" )\n \n\n asString\n \n\n std::exception On invalid format\n\nC++: mrpt::math::TPose3DQuat::fromString(const std::string &) --> void", pybind11::arg("s"));
		cl.def_static("FromString", (struct mrpt::math::TPose3DQuat (*)(const std::string &)) &mrpt::math::TPose3DQuat::FromString, "C++: mrpt::math::TPose3DQuat::FromString(const std::string &) --> struct mrpt::math::TPose3DQuat", pybind11::arg("s"));
		cl.def("assign", (struct mrpt::math::TPose3DQuat & (mrpt::math::TPose3DQuat::*)(const struct mrpt::math::TPose3DQuat &)) &mrpt::math::TPose3DQuat::operator=, "C++: mrpt::math::TPose3DQuat::operator=(const struct mrpt::math::TPose3DQuat &) --> struct mrpt::math::TPose3DQuat &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}
