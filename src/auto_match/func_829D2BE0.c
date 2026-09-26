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
extern unsigned int __imp__ExEventObjectType;
extern int fn_82F691F0();
extern unsigned int lbl_83215000;
extern unsigned int lbl_83215A40;


/* WARNING: Removing unreachable block (ram,0x829d2cf8) */

undefined8 fn_829D2BE0(ulonglong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((lbl_83215000 & 8) == 0) {
    uVar1 = 0xffffffff83010005;
  }
  else if ((param_2 & 0xfffffffc) == 0) {
    RtlEnterCriticalSection(0xffffffff8315c454);
    if (lbl_83215A40 == 0) {
      if (((param_1 & 0xffffffff) == 0) ||
         (iVar2 = ObReferenceObjectByHandle(param_1,__imp__ExEventObjectType,0xffffffff83215a54),
         -1 < iVar2)) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(0xffffffff83217030,0,0xb0);
      }
      uVar1 = 0xffffffff80070057;
    }
    else {
      uVar1 = 0xffffffff800704df;
    }
    RtlLeaveCriticalSection(0xffffffff8315c454);
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}

