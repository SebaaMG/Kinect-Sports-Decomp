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
extern unsigned int *auStack_50;
extern unsigned int *auStack_5f;
extern int fn_82681728();
extern int fn_826829A0();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_826B14D8();
extern int fn_826C0B08();
extern int fn_826C1FF8();
extern int fn_8271FDB0();
extern int fn_82720700();
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int lbl_8200E890;
extern unsigned int lbl_8200FDC8;
extern unsigned int lbl_82012A64;
extern unsigned int uStack_60;


undefined4 * fn_8271CBC0(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined1 uStack_60;
  undefined1 auStack_5f [3];
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_40 [64];
  
  fn_826C0B08();
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_8200FDC8;
  puVar3 = param_1 + 4;
  puVar4 = (uint *)(param_2 + 0x78);
  uVar1 = fn_826B14D8(*(undefined4 *)(param_2 + 0x78),0x1f);
  fn_826829A0(puVar3,puVar4,uVar1);
  fn_82720700(puVar4,puVar3);
  uVar1 = lbl_8200E890;
  *(undefined8 *)(param_1 + 0xc) = lbl_8200E890;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  fn_8271FDB0(param_2,puVar3,puVar3);
  uStack_60 = 1;
  fn_82681728(&iStack_54,(ulonglong)*(uint *)(param_2 + 0x78) + 0x254,0xffffffff8200fe30);
  auStack_50[0] = 5;
  iStack_4c = iStack_54;
  *(int *)(iStack_54 + 8) = *(int *)(iStack_54 + 8) + 1;
  fn_82681728(&iStack_5c,(ulonglong)*puVar4 + 0x254,0xffffffff8200fe24);
  fn_826C1FF8(puVar3,puVar4,&iStack_5c,auStack_50,&uStack_60);
  lVar2 = (ulonglong)*(uint *)(iStack_5c + 8) - 1;
  *(int *)(iStack_5c + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(iStack_5c);
  }
  fn_82696330(auStack_50);
  lVar2 = (ulonglong)*(uint *)(iStack_54 + 8) - 1;
  *(int *)(iStack_54 + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(iStack_54);
  }
  auStack_5f[0] = 1;
  auStack_40[0] = 0;
  fn_82681728(&iStack_58,(ulonglong)*puVar4 + 0x254,0xffffffff8200fe1c);
  fn_826C1FF8(puVar3,puVar4,&iStack_58,auStack_40,auStack_5f);
  lVar2 = (ulonglong)*(uint *)(iStack_58 + 8) - 1;
  *(int *)(iStack_58 + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8(iStack_58);
  }
  fn_82696330(auStack_40);
  return param_1;
}

