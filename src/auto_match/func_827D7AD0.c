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
extern unsigned int *auStack_58;
extern unsigned int *auStack_5c;
extern int fn_82517978();
extern int fn_827D8DE0();
extern int fn_827D9900();
extern int fn_827D9928();
extern int fn_827D9930();


/* WARNING: Removing unreachable block (ram,0x827d7b80) */

longlong fn_827D7AD0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [88];
  
  lVar3 = 0;
  RtlEnterCriticalSection(param_1 + 0xf4);
  puVar2 = *(undefined4 **)(param_1 + 0xcc);
LAB_827d7b84:
  do {
    if (puVar2 == *(undefined4 **)(param_1 + 0xd0)) {
      RtlLeaveCriticalSection(param_1 + 0xf4);
      return lVar3;
    }
    fn_82517978(auStack_58,*puVar2,puVar2[1],0);
    iVar1 = fn_827D9900(0);
    if (iVar1 == 0) {
      iVar1 = fn_827D9928(0);
      if (iVar1 == 5) {
        puVar2 = (undefined4 *)fn_827D8DE0(auStack_5c,param_1 + 0xcc,puVar2);
        puVar2 = (undefined4 *)*puVar2;
        goto LAB_827d7b84;
      }
      fn_827D9930(0);
    }
    else {
      lVar3 = lVar3 + 1;
    }
    puVar2 = puVar2 + 2;
  } while( true );
}

