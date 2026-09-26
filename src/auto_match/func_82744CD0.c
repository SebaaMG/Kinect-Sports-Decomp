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
extern unsigned int *auStack_30;
extern unsigned int *auStack_3f;
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_826BF638();
extern int fn_826C1FF8();
extern int fn_82744C18();
extern unsigned int lbl_82012814;
extern unsigned int lbl_82012818;
extern unsigned int lbl_8201286C;
extern unsigned int uStack_28;
extern unsigned int uStack_40;


undefined4 * fn_82744CD0(undefined4 *param_1,uint *param_2)

{
  longlong lVar1;
  undefined1 uStack_40;
  undefined1 auStack_3f [3];
  int aiStack_3c [3];
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  
  fn_82744C18();
  *param_1 = &lbl_8201286C;
  param_1[4] = &lbl_82012818;
  param_1[0xc] = &lbl_82012814;
  uStack_40 = 6;
  fn_826BF638(param_1 + 0xc,param_1,param_2,0xffffffff82012750,&uStack_40);
  auStack_3f[0] = 2;
  auStack_30[0] = 4;
  uStack_28 = 0;
  fn_82681728(aiStack_3c,(ulonglong)*param_2 + 0x254,0xffffffff82006680);
  fn_826C1FF8(param_1 + 4,param_2,aiStack_3c,auStack_30,auStack_3f);
  lVar1 = (ulonglong)*(uint *)(aiStack_3c[0] + 8) - 1;
  *(int *)(aiStack_3c[0] + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(aiStack_3c[0]);
  }
  fn_82696330(auStack_30);
  return param_1;
}

