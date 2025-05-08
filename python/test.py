import matplotlib.pyplot as plt
from matplotlib.backends.backend_pdf import PdfPages
from matplotlib.font_manager import FontProperties

# 会話内容
conversation_text = """
【極限と導関数（y'）の違い】

■ 極限（limit）
- 意味：ある値に限りなく近づいたときの様子を調べる
- 書き方：lim_{x→a} f(x)
- 例：lim_{x→2} (x² + 1) = 5
→ 「x が a に近づくと、関数はどうなる？」を知るための道具。

■ 導関数（微分、y'）
- 意味：関数の変化の割合（グラフの傾き）を調べる
- 書き方：f'(x) または y'
- 定義：f'(x) = lim_{h→0} (f(x+h) - f(x)) / h
→ 関数がどれくらい変化するか（＝傾き）を見るための道具。
→ 実は「導関数」も「極限」を使って定義される！

■ 違いまとめ：

| 比較項目   | 極限（limit）             | 導関数（微分、y'）           |
|------------|----------------------------|------------------------------|
| 意味       | 値に近づいたときの様子     | 関数の変化の割合（傾き）     |
| 使い道     | グラフのつながりの確認など | 傾き・速度・最大最小など     |
| 書き方     | lim_{x→a} f(x)             | f'(x), dy/dx, y'             |
| 関係       | 広い概念                   | 極限を使って定義される       |

■ まとめ
- 極限：近づくとどうなるかを見る道具。
- 導関数：どれくらい変化しているか（傾き）を見る道具。
- 導関数は極限を使って作られている！
"""

# フォントの指定（Noto Sans CJK JP）
font_path = "/usr/share/fonts/opentype/noto/NotoSansCJK-Regular.ttc"
jp_font = FontProperties(fname=font_path, size=12)

# プロット作成
plt.figure(figsize=(10, 12))
plt.axis('off')
plt.text(0, 1, conversation_text, fontsize=12, va='top', fontproperties=jp_font, family='monospace')

# PDFとして保存
with PdfPages("kyokugen_vs_derivative.pdf") as pdf:
    pdf.savefig(bbox_inches='tight')
    plt.close()
