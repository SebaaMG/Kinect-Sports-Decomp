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
extern int fn_82686278();
extern unsigned int uStack_2c;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


undefined8 fn_82686500(undefined8 param_1,int *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piStack_40;
  undefined4 uStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  
  uVar3 = 0;
  bVar1 = *param_2 != 0;
  if (bVar1) {
    uVar2 = fn_82686278(&piStack_40,(ulonglong)(uint)param_2[1] + 0x14);
  }
  else {
    uVar2 = (**(code **)(*(int *)param_2[1] + 4))(&piStack_38);
  }
  fn_82686278(&piStack_30,uVar2);
  if (bVar1) {
    if (piStack_40 != (int *)0x0) {
      (**(code **)(*piStack_40 + 8))(piStack_40,uStack_3c);
    }
  }
  if (!bVar1) {
    if (piStack_38 != (int *)0x0) {
      (**(code **)(*piStack_38 + 8))(piStack_38,uStack_34);
    }
  }
  if ((piStack_30 != (int *)0x0) &&
     (uVar3 = (**(code **)(*piStack_30 + 0x10))(piStack_30,uStack_2c), piStack_30 != (int *)0x0)) {
    (**(code **)(*piStack_30 + 8))(piStack_30,uStack_2c);
  }
  return uVar3;
}

