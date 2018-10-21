/* 初始条件：顺序线性表L已存在，1<=i<=ListLength(L)。 */
/* 操作结果：在L中删除第i个位置数据元素，并返回其值到e，L长度-1。 */

Status ListDelete ( Sqlist *L, int i, ElemType *e )
{
	int k;
	
	if ( L->length == 0 )	//当L为空表时
	{
		return ERROR;
	}
	if( i < 1 || i > L->length )	//当i不在长度范围内
	{
		return ERROR;
	}
	/*为什么是 i-1 而不是 i?因为 data 中数据的位置是从 0 开始数的，而i是长度，长度是从1开始的。*/
	*e = L->data[i-1];
	
	if( i <= L->length )	//若要删除数据的位置不在表尾
	{
		/* 将要删除位置后的元素向前移动一位 */
		for( k==i; k <= L->length; k++ )
		{
			L->data[k-1] = L->data[k];
		}
	}
	
	L->length--
	return OK;
}