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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_83023250();
extern int fn_83023880();
extern int fn_83023908();
extern unsigned int lbl_831BC770;


undefined4 * fn_830239C0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = fn_82FA5060(lbl_831BC770,0x50);
  if ((iVar2 != 0) && (puVar3 = (undefined4 *)fn_83023880(), puVar3 != (undefined4 *)0x0)) {
    iVar2 = fn_83023250();
    if (iVar2 == 1) {
      return puVar3;
    }
    fn_83023908(puVar3);
    uVar1 = lbl_831BC770;
    (**(code **)*puVar3)(puVar3,0);
    fn_82FA5190(uVar1,puVar3);
  }
  return (undefined4 *)0x0;
}

