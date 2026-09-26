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
extern int fn_82E32058();
extern unsigned int iStack_4c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


longlong fn_82E24128(undefined8 param_1,int *param_2,int *param_3,undefined8 *param_4)

{
  longlong lVar1;
  int *piStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 auStack_40 [8];
  
  *param_4 = 0;
  auStack_40[0] = 0;
  piStack_50 = (int *)0x0;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2,auStack_40);
  if (-1 < lVar1) {
    lVar1 = fn_82E32058(0x18,&piStack_50);
    if (-1 < lVar1) {
      lVar1 = (**(code **)(*param_2 + 0x1c))(param_2,0);
      if (-1 < lVar1) {
        lVar1 = (**(code **)(*piStack_50 + 0xc))(piStack_50,&iStack_4c,&uStack_48,0);
        if (-1 < lVar1) {
          lVar1 = (**(code **)(*param_2 + 0x24))(param_2,iStack_4c,uStack_48,&uStack_44);
          if (-1 < lVar1) {
            lVar1 = (**(code **)(*piStack_50 + 0x10))();
            if (-1 < lVar1) {
              iStack_4c = 0;
              lVar1 = (**(code **)(*piStack_50 + 0x18))(piStack_50,uStack_44);
              if (-1 < lVar1) {
                lVar1 = (**(code **)(*param_3 + 0xc))(param_3,piStack_50,param_4);
              }
            }
          }
        }
      }
    }
  }
  if (iStack_4c != 0) {
    (**(code **)(*piStack_50 + 0x10))();
  }
  if (piStack_50 != (int *)0x0) {
    (**(code **)(*piStack_50 + 8))();
    piStack_50 = (int *)0x0;
  }
  (**(code **)(*param_2 + 0x1c))(param_2,auStack_40[0]);
  return lVar1;
}

