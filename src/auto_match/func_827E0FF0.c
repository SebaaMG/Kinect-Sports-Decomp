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
extern int fn_827DC9B8();
extern int fn_827E0250();
extern int fn_827E0320();
extern int fn_827E0D30();


undefined4 * fn_827E0FF0(undefined4 *param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  iVar2 = fn_827E0250(param_2,param_3);
  puVar4 = *(undefined4 **)(param_2 + 4);
  piVar3 = (int *)(iVar2 * 8 + *(int *)(param_2 + 0x44));
  puVar1 = (undefined4 *)*piVar3;
  if ((puVar4 != puVar1) && (puVar4 = *(undefined4 **)piVar3[1], puVar4 != puVar1)) {
    do {
      puVar4 = (undefined4 *)puVar4[1];
      if ((uint)puVar4[2] <= *param_3) {
        puVar4 = (undefined4 *)*puVar4;
        break;
      }
    } while (puVar4 != puVar1);
  }
  if (puVar4 != (undefined4 *)*param_4) {
    fn_827E0320(param_2 + 4,puVar4,param_2 + 4,param_4,(undefined4 *)*param_4,1);
  }
  fn_827DC9B8(param_2,param_4,puVar4,iVar2);
  fn_827E0D30(param_2);
  *param_1 = param_4;
  *(undefined1 *)(param_1 + 1) = 1;
  return param_1;
}

