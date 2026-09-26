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
extern unsigned int *auStack_70;
extern int fn_82286108();
extern int fn_822C5B18();
extern int fn_82485AC8();
extern int fn_82486628();
extern int fn_8265C9E0();
extern int fn_82F65390();


void fn_82487840(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_70 [112];
  
  lVar4 = (ulonglong)(uint)param_1[0x11b] + 0x234;
  iVar1 = fn_82F65390(lVar4,0xffffffff821985e0,8);
  if (iVar1 == 0) {
    puVar5 = param_1 + 0x13;
    puVar3 = param_1 + 0x12;
  }
  else {
    iVar1 = fn_82F65390(lVar4,0xffffffff821985b4,10);
    if (iVar1 == 0) {
      puVar5 = param_1 + 0x1b;
      puVar3 = param_1 + 0x1a;
    }
    else {
      iVar1 = fn_82F65390(lVar4,0xffffffff821985d4,0xb);
      if (iVar1 == 0) {
        puVar5 = param_1 + 0x17;
        puVar3 = param_1 + 0x16;
      }
      else {
        iVar1 = fn_82F65390(lVar4,0xffffffff821985c8,9);
        if (iVar1 != 0) {
          iVar1 = fn_82F65390(lVar4,0xffffffff821985c0,7);
          if (iVar1 == 0) {
            puVar5 = param_1 + 0xb;
            puVar3 = param_1 + 10;
            goto LAB_82487938;
          }
          iVar1 = fn_82F65390(lVar4,0xffffffff821985ec,6);
          if (iVar1 == 0) {
            puVar5 = param_1 + 0xf;
            puVar3 = param_1 + 0xe;
            goto LAB_82487938;
          }
        }
        puVar3 = param_1 + 6;
        puVar5 = param_1 + 7;
      }
    }
  }
LAB_82487938:
  iVar1 = *(int *)(param_1[0x11b] + 0x18b8);
  fn_82485AC8();
  if (*(int *)(param_1[0x11b] + 0x18b8) != iVar1) {
    fn_82486628();
  }
  lVar4 = fn_8265C9E0(0x1250);
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    fn_822C5B18(auStack_70,param_1 + 0x114);
    uVar2 = fn_82286108(lVar4,param_1 + 0x1e,param_1[0x11a],param_1[0x113],param_1[0x11c],
                            param_1[0x11d],puVar5,puVar3);
  }
  param_1[0x112] = uVar2;
  *param_1 = 0;
  return;
}

