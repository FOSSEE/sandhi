//
// Copyright 2012 Josh Blum
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <gras/tags.hpp>

using namespace gras;

Tag::Tag(void):
    offset(0)
{
    //NOP
}

Tag::Tag(const item_index_t &offset, const PMCC &key, const PMCC &value, const PMCC &srcid):
    offset(offset), key(key), value(value), srcid(srcid)
{
    //NOP
}

bool gras::operator<(const Tag &lhs, const Tag &rhs)
{
    return lhs.offset < rhs.offset;
}
