/*
 * Copyright (C) 2015 Stuart Howarth <showarth@marxoft.co.uk>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#ifndef I18NLANGUAGESREQUEST_H
#define I18NLANGUAGESREQUEST_H

#include "request.h"

class QStringList;

namespace QYouTube {

class QYOUTUBESHARED_EXPORT I18nLanguagesRequest : public Request
{
    Q_OBJECT
    
public:
    explicit I18nLanguagesRequest(QObject *parent = 0);
    
public Q_SLOTS:
    void list(const QStringList &part, const QVariantMap &params = QVariantMap());

private:
    Q_DISABLE_COPY(I18nLanguagesRequest)
};

}

#endif // I18NLANGUAGESREQUEST_H