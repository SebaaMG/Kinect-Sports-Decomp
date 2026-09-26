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
extern int fn_82E65CB8();
extern int fn_82E65EE8();
extern unsigned int uStack_44;
extern unsigned int uStack_48;


/* WARNING: Type propagation algorithm not settling */

longlong fn_82E3A4E8(undefined8 param_1,int *param_2,longlong param_3,int *param_4)

{
  longlong lVar1;
  int *piStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint auStack_40 [16];
  
  piStack_50 = (int *)0x0;
  piStack_4c = (int *)0x0;
  uStack_44 = 0;
  lVar1 = fn_82E65EE8(0x200,&piStack_50);
  if (-1 < lVar1) {
    lVar1 = fn_82E65CB8(piStack_50,&piStack_4c);
    if (-1 < lVar1) {
      lVar1 = (**(code **)(*param_2 + 0x1c))(param_2,param_3);
      if (-1 < lVar1) {
        while( true ) {
          uStack_48 = 0;
          auStack_40[1] = 0;
          lVar1 = (**(code **)(*param_2 + 0x1c))(param_2,param_3);
          if (lVar1 < 0) break;
          lVar1 = (**(code **)(*piStack_50 + 0xc))(piStack_50,&uStack_48,0,auStack_40 + 1);
          if (lVar1 < 0) break;
          lVar1 = (**(code **)(*param_2 + 0x24))(param_2,uStack_48,0x200,&uStack_44);
          (**(code **)(*piStack_50 + 0x10))(piStack_50);
          if ((int)lVar1 < 0) break;
          lVar1 = (**(code **)(*piStack_50 + 0x18))(piStack_50,uStack_44);
          if (lVar1 < 0) break;
          auStack_40[0] = 0;
          lVar1 = (**(code **)(*param_4 + 0x18))(param_4,piStack_4c,auStack_40);
          if ((lVar1 < 0) || (param_3 = (ulonglong)auStack_40[0] + param_3, (int)lVar1 == 0)) break;
        }
      }
    }
  }
  if (piStack_50 != (int *)0x0) {
    (**(code **)(*piStack_50 + 8))();
    piStack_50 = (int *)0x0;
  }
  if (piStack_4c != (int *)0x0) {
    (**(code **)(*piStack_4c + 8))();
  }
  return lVar1;
}

