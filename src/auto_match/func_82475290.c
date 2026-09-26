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
extern unsigned int *auStack_20;
extern int fn_8249ABC0();
extern int fn_8249B598();
extern int fn_8249F490();
extern int fn_82F4EBE8();
extern int fn_82F52188();
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


undefined8 fn_82475290(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [16];
  
  uVar2 = fn_8249ABC0();
  fn_8249B598(uVar2,param_1);
  piVar3 = (int *)fn_82F4EBE8();
  if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 4))(piVar3), iVar4 != 0)) {
    iVar4 = fn_8249ABC0();
    puVar1 = *(undefined4 **)(iVar4 + 0xec);
    uStack_30 = *puVar1;
    uStack_2c = puVar1[1];
    uStack_28 = puVar1[2];
    uStack_24 = puVar1[3];
    fn_82F52188(auStack_20,piVar3,1);
    iVar4 = fn_8249F490(&uStack_30);
    if (iVar4 != 0) {
      return 1;
    }
  }
  return 0;
}

