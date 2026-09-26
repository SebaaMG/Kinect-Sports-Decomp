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


uint fn_82C07C18(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  if (iVar2 < -0x7fafff45) {
    if (iVar2 == -0x7fafff46) {
      return 5;
    }
    if (iVar2 < -0x7faffff3) {
      if (iVar2 == -0x7faffff4) {
        return 1;
      }
      if (iVar2 < -0x7fafffff) {
        if (iVar2 == -0x7fb00000) {
          return 0x1e;
        }
        if ((param_1 & 0xffffffff) == 0x80004005) {
          return 0x1d;
        }
        if (param_1 + 0x7ff8fff2 == 0) {
          return 3;
        }
        if ((param_1 + 0x7ff8fff2 & 0xffffffff) == 0x49) {
          return 4;
        }
      }
      else if (-0x7fafffff < iVar2) {
        if (iVar2 < -0x7faffffc) {
          return 0x1d;
        }
        if (iVar2 == -0x7faffffa) {
          return 0x1e;
        }
      }
    }
    else if (iVar2 < -0x7fafffe7) {
      if (-0x7fafffea < iVar2) {
        return 2;
      }
      if (iVar2 == -0x7faffff3) {
        return 0x1c;
      }
      if ((-0x7faffff3 < iVar2) && (iVar2 < -0x7fafffea)) {
        return 0x1b;
      }
    }
    else if (-0x7fafff5a < iVar2) {
      if (iVar2 < -0x7fafff57) {
        return 7;
      }
      if (iVar2 == -0x7fafff49) {
        return 0x12;
      }
    }
  }
  else if (iVar2 < -0x7f9ffff7) {
    if (iVar2 == -0x7f9ffff8) {
      return 0x15;
    }
    if ((((param_1 + 0x7fa00000 & 0xffffffff) < 8) &&
        (bVar1 = (int)(param_1 + 0x7fa00000) != 0, param_1 != 0xffffffff80600001 || !bVar1)) &&
       (param_1 != 0xffffffff80600002 || !bVar1)) {
      if (param_1 == 0xffffffff80600003 && bVar1) {
        return 0x10;
      }
      if (param_1 == 0xffffffff80600004 && bVar1) {
        return 0x17;
      }
      if (param_1 == 0xffffffff80600005 && bVar1) {
        return 0x18;
      }
      if (param_1 != 0xffffffff80600006 || !bVar1) {
        return 0xf;
      }
      return 0x11;
    }
  }
  else if (iVar2 < 0x500005) {
    if (iVar2 == 0x500004) {
      return 0x21;
    }
    if ((iVar2 == 0) || ((0x4fffff < iVar2 && (iVar2 < 0x500004)))) {
      return 0;
    }
  }
  else if (0x500004 < iVar2) {
    if (iVar2 < 0x500007) {
      return 0;
    }
    if (iVar2 == 0x600000) {
      return 0x16;
    }
  }
  return iVar2 >> 0x1f & 0x1d;
}

