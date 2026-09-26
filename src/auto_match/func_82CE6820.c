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
extern V16 vectorMergeHighWord();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82CE6820(int param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 in_vs32 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_00010040;
  undefined4 in_register_00010044;
  undefined4 in_register_00010048;
  undefined4 in_vr4;
  
  iVar2 = param_3 + 0x20;
  lVar3 = 3;
  do {{ V16 _vt0 = vectorMergeHighWord(in_vs41,in_vs32); memcpy(auVar6, &_vt0, 16); }{ V16 _vt1 = vectorMergeHighWord(in_vs39,in_vs40); memcpy(auVar5, &_vt1, 16); }
    vectorMergeHighWord(auVar5,auVar6);
    puVar1 = (undefined4 *)((param_1 - param_3) + iVar2 & 0xfffffff0);
    *puVar1 = in_register_00010040;
    puVar1[1] = in_register_00010044;
    puVar1[2] = in_register_00010048;
    puVar1[3] = in_vr4;
    iVar2 = iVar2 + -0x10;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  vectorSubtractFloatingPoint(in_vs41,in_vs42);{ V16 _vt2 = vectorMergeHighWord(in_vs39,in_vs32); memcpy(auVar4, &_vt2, 16); }{ V16 _vt3 = vectorMergeHighWord(auVar5,auVar6); memcpy(auVar5, &_vt3, 16); }
  vectorMergeHighWord(auVar5,auVar4);
  puVar1 = (undefined4 *)(param_1 + 0x30U & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  return;
}

