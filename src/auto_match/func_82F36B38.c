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
extern int fn_82F35400();
extern int fn_82F37588();


undefined8 fn_82F36B38(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  int *piStack_50;
  undefined4 *apuStack_4c [19];
  
  uVar1 = *(uint *)(param_1 + 0xc4);
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      fn_82F35400(param_1 + 0x5c,uVar4,apuStack_4c);
      piVar2 = (int *)*apuStack_4c[0];
      iVar3 = (**(code **)*piVar2)(piVar2,0xffffffff8214c740,&piStack_50);
      if (-1 < iVar3) {
        (**(code **)(*piStack_50 + 0x10))();
        if (piStack_50 != (int *)0x0) {
          (**(code **)(*piStack_50 + 8))();
          piStack_50 = (int *)0x0;
        }
      }
      (**(code **)(*piVar2 + 8))(piVar2);
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)uVar1);
  }
  fn_82F37588(param_1 + 0x5c,0);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  return 0;
}

