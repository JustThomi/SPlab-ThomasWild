#pragma once

class RequestLoggingFilter {

public:
	RequestLoggingFilter();
	~RequestLoggingFilter();

	void doFilter();
};