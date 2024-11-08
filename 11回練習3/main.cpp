#include<iostream>
using namespace std;

void main() {
	const char* nameData[] = {
	"ピタゴラス",
	"アルキメデス",
	"エラストテネス",
	"ユークリッド",
	"フィボナッチ",
	"デカルト",
	"フェルマー",
	"パスカル",
	"オイラー",
	"ラプラス",
	"フーリエ",
	"ガウス",
	"ド・モルガン",
	"ブール",
	"リーマン",
	"ポアンカレ",
	"ラッセル",
	"ニュートン",
	"テイラー",
	"ケプラー",
	"ガリレオ",
	"ボイル",
	"フック",
	"ホイヘンス",
	"ベルヌイ",
	"ラグランジュ",
	"ファラデー",
	"ジュール",
	"フーコー",
	"ストークス",
	"マクスウェル",
	"マッハ",
	"レントゲン",
	"キュリー",
	"ラザフォード",
	"アインシュタイン",
	"ジェフリー・エヴァレスト・ヒントン",
	"デミス・ハサビス"
	};
#define NUM 37
	for (int i = 0; i < NUM; i++) {//マジックナンバーを消す
		cout << nameData[i] << endl;
	}
#define NAME_MAX		(sizeof(nameData)/sizeof(char*))
	cout << "NAME_MAX=" << NAME_MAX << endl;
	cout << "sizeof(nameData)=" << sizeof(nameData) << endl;
	cout <<  "sizeof(char*)=" << sizeof(char*) << endl;
	for (int i = 0; i < NAME_MAX; i++) {//マジックナンバーを消す
		cout << nameData[i] << endl;
	}
	cout << "----------" << endl;
	for (const auto p: nameData) {
		cout << p << endl;
	}



}
