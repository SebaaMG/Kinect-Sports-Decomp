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
#define CONCAT13(h,l) ((U32)((((U8)(h)) << 24) | ((U32)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82FA5060();
extern int fn_82FE7428();
extern int fn_82FE8948();
extern int fn_82FFA6E8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642F0;
extern unsigned int uStack_68;


undefined8
fn_82FE9BA0(int param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
             ulonglong param_5,undefined8 param_6,longlong param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  undefined4 uStack_68;
  
  if ((param_4 == (undefined4 *)0x0) || ((param_5 & 0xffffffff) == 0)) {
    uVar1 = 0x1f;
  }
  else {
    uVar1 = fn_82FE8948(param_3);
    if ((param_5 & 0xffffffff) == 1) {
      lVar2 = fn_82FE8948(*param_4);
      uStack_68 = CONCAT13(param_1 == 0,(((U64)(uStack_68) >> 8) & 0xFFFFFF));
      uVar1 = fn_82FFA6E8(lbl_832642F0,CONCAT44(4,(int)param_6),param_7 << 0x20,
                                CONCAT44((int)param_2,(int)uVar1),CONCAT44(uStack_68,1),
                                lVar2 << 0x20);
    }
    else {
      puVar3 = (undefined4 *)fn_82FA5060(lbl_831BC768,(param_5 & 0x3fffffff) << 2);
      if (puVar3 == (undefined4 *)0x0) {
        uVar1 = 0x34;
      }
      else {
        if ((param_5 & 0xffffffff) != 0) {
          uVar5 = param_5;
          puVar6 = puVar3;
          do {
            uVar4 = fn_82FE8948(*(undefined4 *)((int)param_4 + ((int)puVar6 - (int)puVar3)));
            *puVar6 = uVar4;
            uVar5 = uVar5 - 1;
            puVar6 = puVar6 + 1;
          } while (uVar5 != 0);
        }
        uVar1 = fn_82FE7428(param_6,param_7,param_1 == 0,param_2,uVar1,puVar3,param_5,0);
      }
    }
  }
  return uVar1;
}

