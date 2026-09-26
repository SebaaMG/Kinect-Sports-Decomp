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
extern int fn_8304DD90();
extern int fn_8304DE60();
extern int fn_8304DF58();


undefined8 fn_8304E098(int *param_1)

{
  int iVar2;
  undefined8 uVar1;
  uint *puVar3;
  uint auStack_30 [12];
  
  puVar3 = (uint *)(param_1 + 0xf);
  iVar2 = (**(code **)(*(int *)param_1[10] + 0x2c))((int *)param_1[10],param_1 + 0xd,puVar3,0);
  if (iVar2 == 0x2e) {
    return 0x3f;
  }
  if (((iVar2 == 0x2d) || (iVar2 == 0x11)) && (param_1[0xd] != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x38))(param_1,*(undefined2 *)(param_1[2] + 0xd4));
    if ((int)uVar1 != 1) {
      return uVar1;
    }
    *(undefined1 *)((int)param_1 + 0x41) = 0;
    if ((*(byte *)(param_1[2] + 0xdb) & 0x80) != 0) {
      uVar1 = fn_8304DD90(param_1,auStack_30);
      if ((int)uVar1 != 1) {
        return uVar1;
      }
      if (*puVar3 <= auStack_30[0]) {
        iVar2 = fn_8304DE60(param_1);
        if (iVar2 == 1) {
          (**(code **)(*(int *)param_1[10] + 0x30))();
          *puVar3 = 0;
          return 1;
        }
        goto LAB_8304e100;
      }
      param_1[0x15] = auStack_30[0];
    }
    fn_8304DF58(param_1);
    uVar1 = 1;
  }
  else {
LAB_8304e100:
    uVar1 = 2;
  }
  return uVar1;
}

