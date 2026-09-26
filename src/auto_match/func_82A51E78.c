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
extern int fn_82A403E8();
extern int fn_82A403F0();
extern int fn_82A40BA8();
extern int fn_82A47B28();
extern int fn_82A4F4E0();
extern int fn_82A51260();
extern int fn_82A51990();


longlong fn_82A51E78(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar3;
  longlong lVar2;
  
  (**(code **)(*(int *)(param_1[0xc] + 0x2c) + 8))(param_1[0xc] + 0x2c);
  if (param_2 == (int *)0x0) {
    param_2 = (int *)(param_1[0xc] + 0x248);
  }
  if (param_1[1] != 1) {
    *(uint *)(param_1[0xc] + 0x24) = *(int *)(param_1[0xc] + 0x24) + ((param_1[0x20] == 0) - 1);
    *(int *)(param_1[0xc] + 0x28) = *(int *)(param_1[0xc] + 0x28) - param_1[10];
  }
  while( true ) {
    iVar3 = fn_82A40BA8(param_1 + 2);
    if (iVar3 == 0) break;
    for (piVar1 = *(int **)(*(int *)(iVar3 + 4) + 0x68);
        (piVar1 != (int *)0x0 && ((int *)*piVar1 != param_1)); piVar1 = (int *)piVar1[1]) {
    }
    fn_82A47B28(*(int *)(iVar3 + 4) + 0x50,piVar1);
    (**(code **)(*(int *)**(undefined4 **)(iVar3 + 8) + 4))
              ((int *)**(undefined4 **)(iVar3 + 8),0,0x1337f001);
    fn_82A403E8(param_1[0xc],**(undefined4 **)(iVar3 + 8));
    fn_82A51260(iVar3);
    fn_82A4F4E0(iVar3);
  }
  if (*param_2 == 0) {
    iVar3 = param_1[0x10];
  }
  else {
    iVar3 = *(int *)(*(int *)(param_2[1] + 4) + 0x44);
  }
  if (iVar3 != param_1[0x11]) {
    lVar2 = (**(code **)(*param_1 + 100))(param_1);
    if (lVar2 < 0) goto LAB_82a5203c;
  }
  lVar2 = fn_82A51990(param_1,param_2);
  if (((-1 < lVar2) &&
      (lVar2 = (**(code **)(**(int **)(param_1[0xc] + 0xb0) + 0x48))
                         (*(int **)(param_1[0xc] + 0xb0),0x1337f001), -1 < lVar2)) &&
     (param_1[1] != 1)) {
    *(uint *)(param_1[0xc] + 0x24) = (uint)(param_1[0x20] != 0) + *(int *)(param_1[0xc] + 0x24);
    *(int *)(param_1[0xc] + 0x28) = param_1[10] + *(int *)(param_1[0xc] + 0x28);
  }
LAB_82a5203c:
  (**(code **)(*(int *)(param_1[0xc] + 0x2c) + 0x14))(param_1[0xc] + 0x2c);
  fn_82A403F0(param_1[0xc]);
  return lVar2;
}

