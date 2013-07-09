# SuiteSparse: (for Cholmod & CSparse)
# ----------------------------
FIND_PACKAGE(SuiteSparse)

SET(CMAKE_MRPT_HAS_CHOLMOD 0)
SET(CMAKE_MRPT_HAS_CHOLMOD_SYSTEM 0)
IF(CHOLMOD_FOUND)
	IF($ENV{VERBOSE})
		MESSAGE(STATUS "Cholmod: includedir: ${CHOLMOD_INCLUDE_DIR}")
		MESSAGE(STATUS "         libs: ${CHOLMOD_LIBRARIES}")
	ENDIF($ENV{VERBOSE})

	INCLUDE_DIRECTORIES(${CHOLMOD_INCLUDE_DIR})
	APPEND_MRPT_LIBS(${CHOLMOD_LIBRARIES})

	SET(CMAKE_MRPT_HAS_CHOLMOD 1)
	SET(CMAKE_MRPT_HAS_CHOLMOD_SYSTEM 1)
ENDIF(CHOLMOD_FOUND)

# SPQR: 
# ----------------------------
SET(CMAKE_MRPT_HAS_SPQR 0)
SET(CMAKE_MRPT_HAS_SPQR_SYSTEM 0)

find_path(SPQR_INCLUDES
	NAMES SuiteSparseQR.hpp
	PATHS $ENV{SPQRDIR} ${INCLUDE_INSTALL_DIR}
	PATH_SUFFIXES suitesparse ufsparse
	)
find_library(SPQR_LIBRARIES spqr $ENV{SPQRDIR} ${LIB_INSTALL_DIR})
mark_as_advanced(SPQR_INCLUDES SPQR_LIBRARIES)

IF (SPQR_INCLUDES AND SPQR_LIBRARIES)
	SET(CMAKE_MRPT_HAS_SPQR 1)
	SET(CMAKE_MRPT_HAS_SPQR_SYSTEM 1)

	IF($ENV{VERBOSE})
		MESSAGE(STATUS "SPQR: includedir: ${SPQR_INCLUDE_DIR}")
		MESSAGE(STATUS "      libs: ${SPQR_LIBRARIES}")
	ENDIF($ENV{VERBOSE})

	INCLUDE_DIRECTORIES(${SPQR_INCLUDE_DIR})
	APPEND_MRPT_LIBS(${SPQR_LIBRARIES})

ENDIF (SPQR_INCLUDES AND SPQR_LIBRARIES)



# SuiteSparse: CSparse
# ----------------------------
IF(CSPARSE_FOUND)
	IF($ENV{VERBOSE})
		MESSAGE(STATUS "CSparse: includedir: ${CSPARSE_INCLUDE_DIR}")
		MESSAGE(STATUS "         libs: ${CSPARSE_LIBRARY}")
	ENDIF($ENV{VERBOSE})

	INCLUDE_DIRECTORIES(${CSPARSE_INCLUDE_DIR})
	APPEND_MRPT_LIBS(${CSPARSE_LIBRARY})

	SET(CMAKE_MRPT_HAS_CSPARSE 1)
	SET(CMAKE_MRPT_HAS_CSPARSE_SYSTEM 1)
ELSE(CSPARSE_FOUND)
	# Default: use embedded version
	SET(CMAKE_MRPT_HAS_CSPARSE 1)
	SET(CMAKE_MRPT_HAS_CSPARSE_SYSTEM 0)
ENDIF(CSPARSE_FOUND)
