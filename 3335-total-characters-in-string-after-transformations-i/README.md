<h2><a href="https://leetcode.com/problems/total-characters-in-string-after-transformations-i/">3335. Total Characters in String After Transformations I</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given a string <code style="user-select: auto;">s</code> and an integer <code style="user-select: auto;">t</code>, representing the number of <strong style="user-select: auto;">transformations</strong> to perform. In one <strong style="user-select: auto;">transformation</strong>, every character in <code style="user-select: auto;">s</code> is replaced according to the following rules:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;">If the character is <code style="user-select: auto;">'z'</code>, replace it with the string <code style="user-select: auto;">"ab"</code>.</li>
	<li style="user-select: auto;">Otherwise, replace it with the <strong style="user-select: auto;">next</strong> character in the alphabet. For example, <code style="user-select: auto;">'a'</code> is replaced with <code style="user-select: auto;">'b'</code>, <code style="user-select: auto;">'b'</code> is replaced with <code style="user-select: auto;">'c'</code>, and so on.</li>
</ul>

<p style="user-select: auto;">Return the <strong style="user-select: auto;">length</strong> of the resulting string after <strong style="user-select: auto;">exactly</strong> <code style="user-select: auto;">t</code> transformations.</p>

<p style="user-select: auto;">Since the answer may be very large, return it <strong style="user-select: auto;">modulo</strong><!-- notionvc: eb142f2b-b818-4064-8be5-e5a36b07557a --> <code style="user-select: auto;">10<sup style="user-select: auto;">9</sup> + 7</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">s = "abcyy", t = 2</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">7</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><strong style="user-select: auto;">First Transformation (t = 1)</strong>:

	<ul style="user-select: auto;">
		<li style="user-select: auto;"><code style="user-select: auto;">'a'</code> becomes <code style="user-select: auto;">'b'</code></li>
		<li style="user-select: auto;"><code style="user-select: auto;">'b'</code> becomes <code style="user-select: auto;">'c'</code></li>
		<li style="user-select: auto;"><code style="user-select: auto;">'c'</code> becomes <code style="user-select: auto;">'d'</code></li>
		<li style="user-select: auto;"><code style="user-select: auto;">'y'</code> becomes <code style="user-select: auto;">'z'</code></li>
		<li style="user-select: auto;"><code style="user-select: auto;">'y'</code> becomes <code style="user-select: auto;">'z'</code></li>
		<li style="user-select: auto;">String after the first transformation: <code style="user-select: auto;">"bcdzz"</code></li>
	</ul>
	</li>
	<li style="user-select: auto;"><strong style="user-select: auto;">Second Transformation (t = 2)</strong>:
	<ul style="user-select: auto;">
		<li style="user-select: auto;"><code style="user-select: auto;">'b'</code> becomes <code style="user-select: auto;">'c'</code></li>
		<li style="user-select: auto;"><code style="user-select: auto;">'c'</code> becomes <code style="user-select: auto;">'d'</code></li>
		<li style="user-select: auto;"><code style="user-select: auto;">'d'</code> becomes <code style="user-select: auto;">'e'</code></li>
		<li style="user-select: auto;"><code style="user-select: auto;">'z'</code> becomes <code style="user-select: auto;">"ab"</code></li>
		<li style="user-select: auto;"><code style="user-select: auto;">'z'</code> becomes <code style="user-select: auto;">"ab"</code></li>
		<li style="user-select: auto;">String after the second transformation: <code style="user-select: auto;">"cdeabab"</code></li>
	</ul>
	</li>
	<li style="user-select: auto;"><strong style="user-select: auto;">Final Length of the string</strong>: The string is <code style="user-select: auto;">"cdeabab"</code>, which has 7 characters.</li>
</ul>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">s = "azbk", t = 1</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">5</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><strong style="user-select: auto;">First Transformation (t = 1)</strong>:

	<ul style="user-select: auto;">
		<li style="user-select: auto;"><code style="user-select: auto;">'a'</code> becomes <code style="user-select: auto;">'b'</code></li>
		<li style="user-select: auto;"><code style="user-select: auto;">'z'</code> becomes <code style="user-select: auto;">"ab"</code></li>
		<li style="user-select: auto;"><code style="user-select: auto;">'b'</code> becomes <code style="user-select: auto;">'c'</code></li>
		<li style="user-select: auto;"><code style="user-select: auto;">'k'</code> becomes <code style="user-select: auto;">'l'</code></li>
		<li style="user-select: auto;">String after the first transformation: <code style="user-select: auto;">"babcl"</code></li>
	</ul>
	</li>
	<li style="user-select: auto;"><strong style="user-select: auto;">Final Length of the string</strong>: The string is <code style="user-select: auto;">"babcl"</code>, which has 5 characters.</li>
</ul>
</div>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists only of lowercase English letters.</li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= t &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
</ul>
</div>