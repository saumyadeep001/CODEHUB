<h2><a href="https://leetcode.com/problems/count-substrings-with-k-frequency-characters-i/">3325. Count Substrings With K-Frequency Characters I</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given a string <code style="user-select: auto;">s</code> and an integer <code style="user-select: auto;">k</code>, return the total number of <span data-keyword="substring-nonempty" style="user-select: auto;">substrings</span> of <code style="user-select: auto;">s</code> where <strong style="user-select: auto;">at least one</strong> character appears <strong style="user-select: auto;">at least</strong> <code style="user-select: auto;">k</code> times.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 1:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">s = "abacb", k = 2</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">4</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">The valid substrings are:</p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">"aba"</code> (character <code style="user-select: auto;">'a'</code> appears 2 times).</li>
	<li style="user-select: auto;"><code style="user-select: auto;">"abac"</code> (character <code style="user-select: auto;">'a'</code> appears 2 times).</li>
	<li style="user-select: auto;"><code style="user-select: auto;">"abacb"</code> (character <code style="user-select: auto;">'a'</code> appears 2 times).</li>
	<li style="user-select: auto;"><code style="user-select: auto;">"bacb"</code> (character <code style="user-select: auto;">'b'</code> appears 2 times).</li>
</ul>
</div>

<p style="user-select: auto;"><strong class="example" style="user-select: auto;">Example 2:</strong></p>

<div class="example-block" style="user-select: auto;">
<p style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> <span class="example-io" style="user-select: auto;">s = "abcde", k = 1</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Output:</strong> <span class="example-io" style="user-select: auto;">15</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></p>

<p style="user-select: auto;">All substrings are valid because every character appears at least once.</p>
</div>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= s.length &lt;= 3000</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= k &lt;= s.length</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">s</code> consists only of lowercase English letters.</li>
</ul>
</div>