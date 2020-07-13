#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
	queue<int> q;
	priority_queue <int, vector<int>, less<int> > pq;
	
	int n;
	int op;
	int result;
	int it_pq;
	int it_stack;
	int it_queue;
	
	while(cin >> n)
	{
		it_pq = 1;
		it_stack = 1;
		it_queue = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> op >> result;
			
			if (op == 1)
			{
				if (it_stack) s.push(result);
				if (it_queue) q.push(result);
				if (it_pq) pq.push(result);
			}
			else
			{
				if (s.top() == result)
					s.pop();
				else it_stack = 0;
				
				if (q.front() == result)
					q.pop();
				else it_queue = 0;
				
				if (pq.top() == result)
					pq.pop();
				else it_pq = 0;
			}
		}
		if (it_stack && !it_queue && !it_pq)
            cout << "stack\n";
		else if (!it_stack && it_queue && !it_pq)
            cout << "queue\n";
		else if (!it_stack && !it_queue && it_pq) 
		    cout << "priority queue\n";
		else if (it_stack || it_queue || it_pq) 
		    cout << "not sure\n";
		else if (!it_stack && !it_queue && !it_pq) 
		    cout << "impossible\n";
		
		while(!s.empty()) s.pop();
		while(!q.empty()) q.pop();
		while(!pq.empty()) pq.pop();
	}	
    return 0;
}
