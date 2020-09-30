/**
MIT License

Copyright (c) 2020 Michael Scopchanov

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef DELEGATE_H
#define DELEGATE_H

#include <QStyledItemDelegate>

class DelegatePrivate;

class Delegate : public QStyledItemDelegate
{
	Q_OBJECT
public:
	explicit Delegate(QObject *parent = nullptr);
	~Delegate();

	QSize iconSize() const;
	void setIconSize(int width, int height);
	QMargins contentsMargins() const;
	void setContentsMargins(int left, int top, int right, int bottom);
	int horizontalSpacing() const;
	void setHorizontalSpacing(int spacing);
	int verticalSpacing() const;
	void setVerticalSpacing(int spacing);

	void paint(QPainter *painter, const QStyleOptionViewItem &option,
			   const QModelIndex &index) const override;
	QSize sizeHint(const QStyleOptionViewItem &option,
				   const QModelIndex &index) const override;

private:
	DelegatePrivate *m_ptr;
};

#endif // DELEGATE_H
