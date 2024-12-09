<h2><a href="https://leetcode.com/problems/special-array-ii/">3152. Special Array II</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">An array is considered <strong style="user-select: auto;">special</strong> if every pair of its adjacent elements contains two numbers with different parity.</p>

<p style="user-select: auto;">You are given an array of integer <code style="user-select: auto;">nums</code> and a 2D integer matrix <code style="user-select: auto;">queries</code>, where for <code style="user-select: auto;">queries[i] = [from<sub style="user-select: auto;">i</sub>, to<sub style="user-select: auto;">i</sub>]</code> your task is to check that <span data-keyword="subarray" style="user-select: auto;">subarray</span> <code style="user-select: auto;">nums[from<sub style="user-select: auto;">i</sub>..to<sub style="user-select: auto;">i</sub>]</code> is <strong style="user-select: auto;">special</strong> or not.</p>

<p style="user-select: auto;">Return an array of booleans <code style="user-select: auto;">answer</code> such that <code style="user-select: auto;">answer[i]</code> is <code style="user-select: auto;">true</code> if <code style="user-select: auto;">nums[from<sub style="user-select: auto;">i</sub>..to<sub style="user-select: auto;">i</sub>]</code> is special.<!-- notionvc: e5d6f4e2-d20a-4fbd-9c7f-22fbe52ef730 --></p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">nums = [3,4,1,2,6], queries = [[0,4]]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">[false]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">The subarray is <code style="user-select: auto;">[3,4,1,2,6]</code>. 2 and 6 are both even.</p>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">nums = [4,3,1,6], queries = [[0,2],[2,3]]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">[false,true]</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<ol style="user-select: auto;">
	<li style="user-select: auto;">The subarray is <code style="user-select: auto;">[4,3,1]</code>. 3 and 1 are both odd. So the answer to this query is <code style="user-select: auto;">false</code>.</li>
	<li style="user-select: auto;">The subarray is <code style="user-select: auto;">[1,6]</code>. There is only one pair: <code style="user-select: auto;">(1,6)</code> and it contains numbers with different parity. So the answer to this query is <code style="user-select: auto;">true</code>.</li>
</ol>
</div>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= queries.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">queries[i].length == 2</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= queries[i][0] &lt;= queries[i][1] &lt;= nums.length - 1</code></li>
</ul>
</div>