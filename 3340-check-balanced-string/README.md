<h2><a href="https://leetcode.com/problems/check-balanced-string/">3340. Check Balanced String</a></h2><h3>Easy</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">num</code> consisting of only digits. A string of digits is called <b style="user-select: auto;">balanced </b>if the sum of the digits at even indices is equal to the sum of digits at odd indices.</p>

<p style="user-select: auto;">Return <code style="user-select: auto;">true</code> if <code style="user-select: auto;">num</code> is <strong style="user-select: auto;">balanced</strong>, otherwise return <code style="user-select: auto;">false</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num<span class="example-io" style="user-select: auto;"> = "1234"</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">false</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The sum of digits at even indices is <code style="user-select: auto;">1 + 3 == 4</code>, and the sum of digits at odd indices is <code style="user-select: auto;">2 + 4 == 6</code>.</li>
	<li style="user-select: auto;">Since 4 is not equal to 6, <code style="user-select: auto;">num</code> is not balanced.</li>
</ul>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> num<span class="example-io" style="user-select: auto;"> = "24123"</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> true</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">The sum of digits at even indices is <code style="user-select: auto;">2 + 1 + 3 == 6</code>, and the sum of digits at odd indices is <code style="user-select: auto;">4 + 2 == 6</code>.</li>
	<li style="user-select: auto;">Since both are equal the <code style="user-select: auto;">num</code> is balanced.</li>
</ul>
</div>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">2 &lt;= num.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;"><font face="monospace" style="user-select: auto;">num</font></code> consists of digits only</li>
</ul>
</div>