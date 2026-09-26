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
extern int fn_82799A18();
extern int fn_8279A860();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined4 fn_8279AD50(int *param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_30 = param_2;
  uStack_2c = param_3;
  uVar1 = fn_8279A860(param_1,0,param_1[1],&uStack_30,0xffffffff82799ad8);
  if (uVar1 < (uint)param_1[1]) {
    iVar3 = uVar1 * 0x30 + *param_1;
    iVar2 = fn_82799A18(uStack_30,uStack_2c,iVar3,*(undefined1 *)(iVar3 + 0x2c),0);
    if (iVar2 == 0) {
      if (param_4 != (uint *)0x0) {
        *param_4 = (uint)*(byte *)(iVar3 + 0x2c);
      }
      return *(undefined4 *)(uVar1 * 0x30 + *param_1 + 0x28);
    }
  }
  return 0;
}

