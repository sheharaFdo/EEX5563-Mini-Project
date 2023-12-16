#ifndef __COMPARE__FUNCTION__
#define __COMPARE__FUNCTION__

// Sorting Function


#include "./Process.h"

/**
 * [compare_by_return_time 
 */
int compare_by_return_time(const void *a, const void *b)
{
	/* const void 
	Process *ptA = (Process *)a;
	Process *ptB = (Process *)b;

	if (ptA->return_time < ptB->return_time)
		return -1;
		// -1 

	else if (ptA->return_time > ptB->return_time)
		return 1;
		// 1 

	else
		return 0;
		// 0 
}

/**
 * [quick_sort_by_return_time 
 */
void quick_sort_by_return_time(Process p[], int len)
{
	qsort(p, len, sizeof(Process), compare_by_return_time);
}

/**
 * [merge 
 */
void merge(Process arr[], int left, int mid, int right)
{
	int fIdx = left;
	int rIdx = mid + 1;
	int i;

	Process *sortArr = (Process *)malloc(sizeof(Process) * (right + 1));
	int sIdx = left;

	/* left
	   right*/
	while (fIdx <= mid && rIdx <= right)
	{
		/* left */
		if (arr[fIdx].arrive_time <= arr[rIdx].arrive_time)
			sortArr[sIdx] = arr[fIdx++];

		else
			sortArr[sIdx] = arr[rIdx++];

		sIdx++;
	}

	if (fIdx > mid)
	{
		for (i = rIdx; i <= right; i++, sIdx++)
			sortArr[sIdx] = arr[i];
	}

	else
	{
		for (i = fIdx; i <= mid; i++, sIdx++)
			sortArr[sIdx] = arr[i];
	}

	for (i = left; i <= right; i++)
		arr[i] = sortArr[i];

	free(sortArr);
}

/**
 * [merge_sort_by_arrive_time 
 */
void merge_sort_by_arrive_time(Process arr[], int left, int right)
{
	int mid;

	if (left < right)
	{
		mid = (left + right) / 2;
		merge_sort_by_arrive_time(arr, left, mid);
		merge_sort_by_arrive_time(arr, mid + 1, right);

		merge(arr, left, mid, right);
	}
}

#endif
