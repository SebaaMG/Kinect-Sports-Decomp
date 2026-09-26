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
extern unsigned int *auStack_60;
extern int fn_82E4FE08();
extern int fn_82E7E7E0();
extern int fn_82E7E900();
extern int fn_82E7EC68();
extern int fn_82E7F478();
extern int fn_82E7F8F0();
extern int fn_82E80668();
extern int fn_82F691F0();
extern unsigned int uStack_48;
extern unsigned int uStack_50;


longlong fn_82E80868(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint auStack_60 [4];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [64];
  
  uVar1 = *param_1;
  uVar5 = 0;
  uVar2 = uVar1 >> 0xc & 1;
  auStack_60[0] = 0;
  uStack_50 = 0;
  lVar6 = 0;
  uStack_48 = 0;
  if ((uVar2 != 0) && ((uVar1 & 0xfff) == 0xc)) goto LAB_82e809f4;
  if (uVar1 == 0) {
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = 0x100c;
    puVar3 = (undefined8 *)fn_82E4FE08(0x10);
    *(undefined8 **)(param_1 + 6) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      goto LAB_82e809f4;
    }
  }
  else {
    if (uVar2 != 0) {
      fn_82E7E900(&uStack_50,param_1);
      lVar6 = fn_82E7E7E0(param_1);
      if (-1 < lVar6) {
        lVar6 = fn_82E7EC68(&uStack_50,auStack_60);
        if (-1 < lVar6) {
          uVar4 = (ulonglong)auStack_60[0];
          lVar6 = fn_82E7F478(param_1,0xc,uVar4);
          if (-1 < lVar6) {
            if (uVar4 != 0) {
              do {
                lVar6 = fn_82E7F8F0(&uStack_50,uVar5,auStack_40);
                if (lVar6 < 0) goto LAB_82e809f4;
                lVar6 = fn_82E80668(param_1,uVar5,auStack_40);
                if (lVar6 < 0) goto LAB_82e809f4;
                uVar5 = uVar5 + 1;
              } while ((uVar5 & 0xffffffff) < uVar4);
            }
            fn_82E7E7E0(&uStack_50);
          }
        }
      }
      goto LAB_82e809f4;
    }
    lVar6 = fn_82E7E900(&uStack_50,param_1);
    if ((lVar6 < 0) || (lVar6 = fn_82E7E7E0(param_1), lVar6 < 0)) goto LAB_82e809f4;
    *param_1 = 0x100c;
    param_1[4] = 0;
    param_1[5] = 1;
    uVar5 = fn_82E4FE08(0x10);
    *(int *)(param_1 + 6) = (int)uVar5;
    if ((uVar5 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar5,0,0x10);
    }
  }
  lVar6 = -0x7ff8fff2;
LAB_82e809f4:
  fn_82E7E7E0(&uStack_50);
  return lVar6;
}

