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
extern unsigned int *auStack_38;
extern int fn_82EE62C0();
extern int fn_82EE6838();
extern unsigned int uStack_40;


longlong fn_82E7CDE8(int param_1,short param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uStack_40;
  short sStack_3e;
  int *piStack_3c;
  undefined4 auStack_38 [14];
  
  uVar3 = 0;
  piStack_3c = (int *)0x0;
  uStack_40 = 0;
  lVar2 = 0;
  sStack_3e = 0;
  auStack_38[0] = 0;
  if (param_3 == (int *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x10))
                      (*(int **)(param_1 + 4),0xffffffff82154b08,0,&piStack_3c);
    if (((-1 < iVar1) && (lVar2 = fn_82EE62C0(piStack_3c,&uStack_40), -1 < lVar2)) &&
       (uStack_40 != 0)) {
      do {
        lVar2 = fn_82EE6838(piStack_3c,uVar3,&sStack_3e,auStack_38);
        if (lVar2 < 0) break;
        if (sStack_3e == param_2) {
          lVar2 = (**(code **)(*param_3 + 0x54))(param_3,0xffffffff8214c220,auStack_38[0]);
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uStack_40);
    }
    if (piStack_3c != (int *)0x0) {
      (**(code **)(*piStack_3c + 8))();
    }
  }
  return lVar2;
}

