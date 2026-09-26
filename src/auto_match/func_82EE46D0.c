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
extern int fn_82E3C5F8();
extern int fn_82EE3360();
extern int fn_82EE3630();


undefined8 fn_82EE46D0(int param_1,uint param_2,short param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  int *piStack_40;
  undefined4 *puStack_3c;
  int *apiStack_38 [14];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else {
    param_2 = param_2 & 0xffff;
    if (param_2 < *(uint *)(param_1 + 0xb0)) {
      param_1 = param_1 + 0x48;
      uVar4 = 0;
      fn_82EE3630(param_1,param_2,&piStack_40);
      if (*(int *)(*piStack_40 + 0x40) != 0) {
        do {
          fn_82EE3630(param_1,param_2,&puStack_3c);
          fn_82E3C5F8(*puStack_3c,uVar4,apiStack_38);
          if (*(short *)apiStack_38[0] == param_3) {
            fn_82EE3630(param_1,param_2,apiStack_38);
            iVar1 = *apiStack_38[0];
            if (((uVar4 + 1 & 0xffffffff) <= (ulonglong)*(uint *)(iVar1 + 0x40)) &&
               (iVar3 = fn_82EE3360(iVar1,uVar4), -1 < iVar3)) {
              *(int *)(iVar1 + 0x40) = *(int *)(iVar1 + 0x40) + -1;
            }
            return 0;
          }
          uVar4 = uVar4 + 1;
          fn_82EE3630(param_1,param_2,&piStack_40);
        } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(*piStack_40 + 0x40));
      }
    }
    uVar2 = 0xffffffffc00d36d5;
  }
  return uVar2;
}

