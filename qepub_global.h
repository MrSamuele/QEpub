#ifndef QEPUB_GLOBAL_H
#define QEPUB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QEPUB_LIBRARY)
#  define QEPUBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QEPUBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QEPUB_GLOBAL_H
