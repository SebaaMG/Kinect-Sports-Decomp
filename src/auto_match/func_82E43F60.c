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
extern unsigned int *auStack_30;
extern int fn_82E62AD8();
extern int fn_82E7C230();
extern int fn_82E7C288();
extern int fn_82E7E1D8();


longlong fn_82E43F60(int param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int *piStack_40;
  int *piStack_3c;
  int *apiStack_38 [2];
  undefined1 auStack_30 [48];
  
  piStack_3c = (int *)0x0;
  apiStack_38[0] = (int *)0x0;
  piStack_40 = (int *)0x0;
  fn_82E7C230(auStack_30,*(undefined4 *)(param_1 + 0x18));
  piVar1 = piStack_40;
  if (*(int *)(param_1 + 0x78) == 0) {
    lVar2 = -0x7fff0001;
  }
  else if (param_2 == (undefined4 *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    *param_2 = 0;
    lVar2 = (**(code **)**(undefined4 **)(param_1 + 0x78))
                      (*(undefined4 **)(param_1 + 0x78),0xffffffff821545bc,&piStack_3c);
    piVar1 = piStack_40;
    if ((((-1 < lVar2) &&
         (lVar2 = (**(code **)(*piStack_3c + 0x10))(piStack_3c,apiStack_38), piVar1 = piStack_40,
         -1 < lVar2)) &&
        (lVar2 = (**(code **)*apiStack_38[0])(apiStack_38[0],0xffffffff82153dcc,&piStack_40),
        piVar1 = piStack_40, -1 < lVar2)) &&
       ((lVar2 = fn_82E7E1D8(auStack_30,piStack_40,param_1 + 4), piVar1 = piStack_40, -1 < lVar2
        && (lVar2 = fn_82E62AD8(piStack_40), piVar1 = piStack_40, -1 < lVar2)))) {
      *param_2 = piStack_40;
      piVar1 = (int *)0x0;
      if (piStack_40 != (int *)0x0) {
        (**(code **)(*piStack_40 + 4))(piStack_40);
        piVar1 = piStack_40;
      }
    }
  }
  if (piStack_3c != (int *)0x0) {
    (**(code **)(*piStack_3c + 8))();
    piStack_3c = (int *)0x0;
    piVar1 = piStack_40;
  }
  if (apiStack_38[0] != (int *)0x0) {
    (**(code **)(*apiStack_38[0] + 8))();
    apiStack_38[0] = (int *)0x0;
    piVar1 = piStack_40;
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    piStack_40 = (int *)0x0;
  }
  fn_82E7C288(auStack_30);
  return lVar2;
}

