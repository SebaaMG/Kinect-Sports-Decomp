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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_4c;
extern int fn_82E26F18();
extern int fn_82E27DB8();
extern unsigned int uStack_50;


void fn_82E28318(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,ulonglong param_7,longlong param_8)

{
  int iVar1;
  undefined4 in_stack_00000054;
  undefined4 uStack_50;
  undefined4 auStack_4c [19];
  
  iVar1 = (**(code **)(*param_1 + 0x50))();
  if ((-1 < iVar1) &&
     (iVar1 = (**(code **)(*param_1 + 0x60))(param_1,0xffffffff82153478,0xffffffff821537b8),
     -1 < iVar1)) {
    iVar1 = fn_82E27DB8(param_1,param_4,param_2,param_3,in_stack_00000054);
    if ((((-1 < iVar1) &&
         (((param_7 & 0xffffffff) == 0 ||
          (iVar1 = (**(code **)(*param_1 + 0x54))(param_1,0xffffffff82153698,param_7), -1 < iVar1)))
         ) && (((param_6 & 0xffffffff) == 0 ||
               (iVar1 = (**(code **)(*param_1 + 0x54))(param_1,0xffffffff82153688,param_6),
               -1 < iVar1)))) && ((0 < param_8 && (param_8 < 100000000)))) {
      fn_82E26F18(param_8,auStack_4c,&uStack_50);
      (**(code **)(*param_1 + 0x58))(param_1,0xffffffff82153588,CONCAT44(auStack_4c[0],uStack_50));
    }
  }
  return;
}

