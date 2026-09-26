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
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82F68CC0();
extern int fn_82F691F0();


undefined8 fn_82E54C90(int param_1,uint param_2,ulonglong param_3,uint *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_4 == (uint *)0x0) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    uVar1 = *param_4;
    *param_4 = 0;
    fn_82E50CB8(param_1 + 8);
    if (param_2 < *(uint *)(param_1 + 0x58)) {
      if (param_2 < *(uint *)(param_1 + 0x58)) {
        puVar2 = *(undefined4 **)(param_2 * 4 + *(int *)(param_1 + 0x54));
        if (puVar2 == (undefined4 *)0x0) {
          *param_4 = 0;
          if ((param_3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(param_3,0,uVar1 << 1);
          }
        }
        else {
          *param_4 = puVar2[1];
          if ((param_3 & 0xffffffff) != 0) {
            if (uVar1 < (uint)puVar2[1]) {
              fn_82F68CC0(param_3,*puVar2,uVar1 << 1);
              uVar3 = 0xffffffffc00d36b1;
            }
            else {
              fn_82F68CC0(param_3,*puVar2,puVar2[1] << 1);
            }
          }
        }
      }
      else {
        uVar3 = 0xffffffff8000ffff;
      }
    }
    else {
      uVar3 = 0xffffffff80070057;
    }
    fn_82E50F10(param_1 + 8);
  }
  return uVar3;
}

