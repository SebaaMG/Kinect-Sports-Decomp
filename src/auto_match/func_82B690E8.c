typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern V16 vectorAddSignedWordSaturate();
extern V16 vectorAverageSignedWord();
extern V16 vectorPermute();
extern V16 vectorShiftRightAlgebraicWord();
extern V16 vectorSubtractSignedWordSaturate();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82B690E8(void)

{
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined1 in_vs36 [16];
  undefined1 in_vs37 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 auVar1 [16];
  undefined1 in_vs41 [16];
  undefined1 auVar2 [16];
  undefined1 in_vs42 [16];
  undefined1 auVar3 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar4 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar5 [16];
  
  altv300_21(in_vs32,in_vs37);
  altv300_21(in_vs32,in_vs38);
  altv300_21(in_vs32,in_vs35);
  altv300_21(in_vs32,in_vs36);
  altv300_23(in_vs43,in_vs37);
  altv300_23(in_vs43,in_vs38);
  altv300_23(in_vs43,in_vs35);
  altv300_23(in_vs43,in_vs36);
  altv207_13(in_vs42,in_vs41);{ V16 _vt0 = vectorAddSignedWordSaturate(in_vs44,in_vs45); memcpy(auVar3, &_vt0, 16); }{ V16 _vt1 = vectorSubtractSignedWordSaturate(in_vs41,in_vs43); memcpy(auVar2, &_vt1, 16); }{ V16 _vt2 = vectorSubtractSignedWordSaturate(auVar3,auVar2); memcpy(auVar1, &_vt2, 16); }{ V16 _vt3 = vectorSubtractSignedWordSaturate(auVar1,in_vs45); memcpy(auVar5, &_vt3, 16); }{ V16 _vt4 = vectorSubtractSignedWordSaturate(auVar1,in_vs43); memcpy(auVar4, &_vt4, 16); }{ V16 _vt5 = vectorAddSignedWordSaturate(auVar2,auVar5); memcpy(auVar1, &_vt5, 16); }{ V16 _vt6 = vectorSubtractSignedWordSaturate(auVar3,auVar4); memcpy(auVar2, &_vt6, 16); }{ V16 _vt7 = vectorPermute(auVar1,auVar5,in_vs39); memcpy(auVar3, &_vt7, 16); }{ V16 _vt8 = vectorPermute(auVar1,auVar5,in_vs38); memcpy(auVar4, &_vt8, 16); }{ V16 _vt9 = vectorAverageSignedWord(auVar3,in_vs32); memcpy(auVar1, &_vt9, 16); }{ V16 _vt10 = vectorSubtractSignedWordSaturate(auVar4,auVar1); memcpy(auVar4, &_vt10, 16); }{ V16 _vt11 = vectorAddSignedWordSaturate(auVar4,auVar4); memcpy(auVar1, &_vt11, 16); }{ V16 _vt12 = vectorAddSignedWordSaturate(auVar1,auVar4); memcpy(auVar1, &_vt12, 16); }{ V16 _vt13 = vectorAddSignedWordSaturate(auVar1,in_vs44); memcpy(auVar1, &_vt13, 16); }{ V16 _vt14 = vectorShiftRightAlgebraicWord(auVar1,in_vs44); memcpy(auVar1, &_vt14, 16); }{ V16 _vt15 = vectorSubtractSignedWordSaturate(auVar3,auVar1); memcpy(auVar1, &_vt15, 16); }{ V16 _vt16 = vectorAverageSignedWord(auVar1,in_vs32); memcpy(auVar3, &_vt16, 16); }{ V16 _vt17 = vectorAddSignedWordSaturate(auVar4,auVar3); memcpy(auVar5, &_vt17, 16); }{ V16 _vt18 = vectorAverageSignedWord(auVar1,in_vs32); memcpy(auVar4, &_vt18, 16); }{ V16 _vt19 = vectorSubtractSignedWordSaturate(auVar5,auVar4); memcpy(auVar5, &_vt19, 16); }{ V16 _vt20 = vectorAddSignedWordSaturate(auVar5,auVar5); memcpy(auVar4, &_vt20, 16); }{ V16 _vt21 = vectorAddSignedWordSaturate(auVar4,auVar5); memcpy(auVar4, &_vt21, 16); }{ V16 _vt22 = vectorAddSignedWordSaturate(auVar4,in_vs44); memcpy(auVar4, &_vt22, 16); }{ V16 _vt23 = vectorShiftRightAlgebraicWord(auVar4,in_vs44); memcpy(auVar4, &_vt23, 16); }{ V16 _vt24 = vectorSubtractSignedWordSaturate(auVar1,auVar4); memcpy(auVar1, &_vt24, 16); }{ V16 _vt25 = vectorAverageSignedWord(auVar1,in_vs32); memcpy(auVar1, &_vt25, 16); }{ V16 _vt26 = vectorAddSignedWordSaturate(auVar5,auVar1); memcpy(auVar1, &_vt26, 16); }{ V16 _vt27 = vectorAddSignedWordSaturate(auVar2,auVar5); memcpy(auVar4, &_vt27, 16); }{ V16 _vt28 = vectorSubtractSignedWordSaturate(auVar3,auVar1); memcpy(auVar3, &_vt28, 16); }{ V16 _vt29 = vectorSubtractSignedWordSaturate(auVar4,auVar3); memcpy(auVar2, &_vt29, 16); }{ V16 _vt30 = vectorSubtractSignedWordSaturate(auVar2,auVar1); memcpy(auVar1, &_vt30, 16); }{ V16 _vt31 = vectorSubtractSignedWordSaturate(auVar2,auVar5); memcpy(auVar2, &_vt31, 16); }
  vectorSubtractSignedWordSaturate(auVar4,auVar1);{ V16 _vt32 = vectorAddSignedWordSaturate(auVar3,auVar2); memcpy(auVar2, &_vt32, 16); }
  altv300_27(auVar1,in_vs35);
  altv300_29(in_vs35,auVar2);
  altv300_27(auVar1,in_vs36);
  altv300_29(in_vs36,auVar2);
  altv300_27(auVar1,in_vs37);
  altv300_29(in_vs37,auVar2);
  altv300_27(auVar1,in_vs38);
  altv300_29(in_vs38,auVar2);
  return;
}

