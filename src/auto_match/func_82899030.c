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
extern int fn_8265C9E0();
extern int fn_82897ED8();
extern int fn_82F68CC0();
extern unsigned int lbl_82197140;


undefined4 * fn_82899030(undefined4 *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  *param_1 = &lbl_82197140;
  puVar4 = param_1 + 2;
  iVar2 = (int)param_2;
  param_1[1] = *(undefined4 *)(iVar2 + 4);
  param_1[2] = 0;
  uVar1 = *(uint *)(iVar2 + 0x18);
  param_1[3] = uVar1;
  if (param_1[1] == 7) {
    if (4 < uVar1) {
      uVar3 = fn_8265C9E0();
      *puVar4 = (int)uVar3;
      if (*(uint *)(iVar2 + 0x18) < 5) {
        fn_82F68CC0(uVar3,(param_3 + 2U & 0x3fffffff) * 4 + param_2,param_1[3]);
        return param_1;
      }
      fn_82F68CC0(uVar3,*(undefined4 *)((int)((param_3 + 2U & 0xffffffff) << 2) + iVar2),param_1[3]
                  );
      return param_1;
    }
  }
  else if (*(int *)(iVar2 + 4) == 8) {
    fn_82897ED8(puVar4,(param_3 + 2U & 0x3fffffff) * 4 + param_2);
    return param_1;
  }
  *puVar4 = *(undefined4 *)((int)((param_3 + 2U & 0xffffffff) << 2) + iVar2);
  return param_1;
}

