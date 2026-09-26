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
extern int fn_82292AE8();
extern int fn_82293000();
extern int fn_82293088();
extern int fn_822930F8();
extern int fn_82293168();
extern int fn_82535298();
extern int fn_82536590();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_82864988();


void fn_82292DB8(int *param_1)

{
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar1;
  undefined4 auStack_50 [4];
  undefined1 auStack_40 [40];
  
  if (param_1[4] == 0) {
    iVar2 = fn_82292AE8();
    if (*(int *)(iVar2 + 0x20) != 0) {
      fn_82864988(auStack_40,0xffffffff821aa34c);
      auStack_50[0] = fn_828647D8();
      fn_82864898(auStack_40);
      fn_82536590(auStack_50,0);
      *(undefined4 *)(iVar2 + 0x20) = 0;
    }
    if ((param_1[3] == 0) || (param_1[7] != 0)) {
      if ((param_1[2] == 0) || (param_1[6] != 0)) {
        if (((param_1[1] == 0) || (param_1[5] != 0)) || (*(char *)(param_1 + 0x13) != '\0')) {
          if ((*param_1 != 0) && (param_1[9] == 0)) {
            fn_82293088(param_1);
            fn_822930F8(param_1);
            fn_82293168(param_1);
            fn_82864988(auStack_40,0xffffffff821aa470);
            uVar3 = fn_828647D8();
            fn_82864898(auStack_40);
            uVar1 = fn_828647D8(param_1 + 10);
            auStack_50[0] = uVar3;
            iVar2 = fn_82535298(auStack_50,uVar1,0xffffffff83296bc0,0xffffffff83296bd0);
            param_1[9] = iVar2;
          }
        }
        else {
          fn_82293000(param_1);
          fn_822930F8(param_1);
          fn_82293168(param_1);
          fn_82864988(auStack_40,0xffffffff821aa458);
          auStack_50[0] = fn_828647D8();
          fn_82864898(auStack_40);
          fn_82536590(auStack_50,0);
          param_1[5] = 1;
        }
      }
      else {
        fn_82293000(param_1);
        fn_82293088(param_1);
        fn_82293168(param_1);
        fn_82864988(auStack_40,0xffffffff821aa444);
        auStack_50[0] = fn_828647D8();
        fn_82864898(auStack_40);
        fn_82536590(auStack_50,0);
        param_1[6] = 1;
      }
    }
    else {
      fn_82293000(param_1);
      fn_82293088(param_1);
      fn_822930F8(param_1);
      fn_82864988(auStack_40,0xffffffff821aa42c);
      auStack_50[0] = fn_828647D8();
      fn_82864898(auStack_40);
      fn_82536590(auStack_50,0);
      param_1[7] = 1;
    }
  }
  return;
}

