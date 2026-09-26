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
extern unsigned int *auStack_40;
extern unsigned int *auStack_5b;
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_826BF638();
extern int fn_826C1FF8();
extern int fn_82740EA8();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int lbl_82012410;
extern unsigned int lbl_82012464;
extern unsigned int lbl_820124CC;
extern unsigned int uStack_5c;
extern unsigned int uStack_5d;
extern unsigned int uStack_5e;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;


undefined4 * fn_827413F0(undefined4 *param_1,uint *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 auStack_5b [3];
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int aiStack_48 [2];
  undefined1 auStack_40 [64];
  
  fn_82740EA8();
  *param_1 = &lbl_82012464;
  param_1[4] = &lbl_82012410;
  param_1[0x11] = &lbl_820124CC;
  uStack_60 = 6;
  puVar2 = param_1 + 4;
  fn_826BF638(param_1 + 0x11,param_1,param_2,0xffffffff82012330,&uStack_60);
  auStack_40[0] = 0;
  uStack_5f = 2;
  fn_82681728(&iStack_58,(ulonglong)*param_2 + 0x254,0xffffffff820123e0);
  fn_826C1FF8(puVar2,param_2,&iStack_58,auStack_40,&uStack_5f);
  lVar1 = (ulonglong)*(uint *)(iStack_58 + 8) - 1;
  *(int *)(iStack_58 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_58);
  }
  uStack_5e = 6;
  fn_82681728(&iStack_54,(ulonglong)*param_2 + 0x254,0xffffffff820123b0);
  fn_826C1FF8(puVar2,param_2,&iStack_54,auStack_40,&uStack_5e);
  lVar1 = (ulonglong)*(uint *)(iStack_54 + 8) - 1;
  *(int *)(iStack_54 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_54);
  }
  uStack_5d = 2;
  fn_82681728(&iStack_50,(ulonglong)*param_2 + 0x254,0xffffffff820123e8);
  fn_826C1FF8(puVar2,param_2,&iStack_50,auStack_40,&uStack_5d);
  lVar1 = (ulonglong)*(uint *)(iStack_50 + 8) - 1;
  *(int *)(iStack_50 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_50);
  }
  uStack_5c = 6;
  fn_82681728(&iStack_4c,(ulonglong)*param_2 + 0x254,0xffffffff820123c4);
  fn_826C1FF8(puVar2,param_2,&iStack_4c,auStack_40,&uStack_5c);
  lVar1 = (ulonglong)*(uint *)(iStack_4c + 8) - 1;
  *(int *)(iStack_4c + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_4c);
  }
  auStack_5b[0] = 2;
  fn_82681728(aiStack_48,(ulonglong)*param_2 + 0x254,0xffffffff820123f8);
  fn_826C1FF8(puVar2,param_2,aiStack_48,auStack_40,auStack_5b);
  lVar1 = (ulonglong)*(uint *)(aiStack_48[0] + 8) - 1;
  *(int *)(aiStack_48[0] + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(aiStack_48[0]);
  }
  fn_82696330(auStack_40);
  return param_1;
}

