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
extern unsigned int *auStack_40;
extern int fn_825200A8();
extern int fn_8265BF48();
extern unsigned int uRam83297704;
extern unsigned int uRam83297708;
extern unsigned int uRam8329770c;
extern unsigned int uRam83297b88;


undefined8 fn_8242E460(int param_1)

{
  int iVar1;
  undefined4 auStack_40 [16];
  
  if ((uRam83297b88 & 1) == 0) {
    uRam83297b88 = uRam83297b88 | 1;
    uRam83297704 = fn_8265BF48(0xffffffff821b8e78,0);
  }
  if ((uRam83297b88 & 2) == 0) {
    uRam83297b88 = uRam83297b88 | 2;
    uRam83297708 = fn_8265BF48(0xffffffff821b8eb8,0);
  }
  if ((uRam83297b88 & 4) == 0) {
    uRam83297b88 = uRam83297b88 | 4;
    uRam8329770c = fn_8265BF48(0xffffffff821b8ef4,0);
  }
  auStack_40[0] = **(undefined4 **)(*(int *)(param_1 + 0x174) + 0x9c);
  iVar1 = fn_825200A8(auStack_40,0xffffffff83297704);
  if (((iVar1 == 0) && (iVar1 = fn_825200A8(auStack_40,0xffffffff83297708), iVar1 == 0)) &&
     (iVar1 = fn_825200A8(auStack_40,0xffffffff8329770c), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

