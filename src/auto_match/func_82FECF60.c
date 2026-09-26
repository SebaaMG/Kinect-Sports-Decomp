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
extern int fn_82FECE48();
extern int fn_82FECEE8();
extern int fn_82FEF6B8();
extern unsigned int lbl_831BC794;


undefined8 fn_82FECF60(ulonglong param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  puVar1 = lbl_831BC794;
  do {
    if (puVar1 == (undefined4 *)0x0) {
LAB_82fecf94:
      uVar2 = fn_82FECEE8(2,param_1);
      return uVar2;
    }
    if ((ulonglong)(uint)puVar1[1] == (param_1 & 0xffffffff)) {
      if (((puVar1[2] == 0) || (puVar1[2] == 1)) && (puVar1[5] == 0)) {
        uVar2 = fn_82FECE48();
        fn_82FEF6B8(uVar2,1);
        return 1;
      }
      goto LAB_82fecf94;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

