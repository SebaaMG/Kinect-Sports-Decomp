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
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_827D9698();
extern int fn_827DDFB8();
extern int fn_82A1BB18();


undefined8 fn_8259B138(int param_1,int *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  
  lVar2 = fn_82A1BB18();
  fn_8259C5D8(param_1 + 0x60,1,lVar2 + 1);
  puVar4 = *(undefined4 **)(param_1 + 0x38);
  for (puVar1 = (undefined4 *)*puVar4; puVar1 != puVar4; puVar1 = (undefined4 *)*puVar1) {
    iVar3 = fn_827D9698(puVar1[3]);
    if (iVar3 == *param_2) {
      fn_827DDFB8(param_3,puVar1[3]);
    }
    puVar4 = *(undefined4 **)(param_1 + 0x38);
  }
  fn_82A1BB18();
  fn_8259C738(param_1 + 0x60);
  return 0;
}

